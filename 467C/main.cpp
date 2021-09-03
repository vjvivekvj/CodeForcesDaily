#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n, m, k ;
    cin>>n>>m>>k ;
    int a[n] ;
    FOR(i,0,n){cin>>a[i];}

    //fill prefix array
    long long pre[n-m+1] ;
    pre[0] = 0 ;
    FOR(i,0,m){pre[0]+=a[i];}
    FOR(i,m,n){
        pre[i-m+1] = pre[i-m] + a[i] - a[i-m] ;
    }

    int p = n - m + 1 ;
    long long int dp[p+1][k+1] ;

    // initialize dp
    FOR(i,0,k+1){dp[0][i]=0;}
    FOR(i,0,p+1){dp[i][0]=0;}

    //Fill dp
    FOR(i,1,p+1){
        FOR(j,1,k+1){
            if(i-m>=0){
                dp[i][j] = max(dp[i-1][j], dp[i-m][j-1] + pre[i-1]) ;
            }
            else{
                dp[i][j] = max(dp[i-1][j], pre[i-1]) ;
            }
        }
    }

    cout<<dp[p][k] ;
    return 0;
}
