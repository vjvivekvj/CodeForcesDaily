#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


int main()
{
    int n, k ;
    cin>>n>>k ;
    int height[n] ;
    FOR(i,0,n){
        cin>>height[i] ;
    }

    int pre[n+1] ;
    pre[0] = 0 ;

    FOR(i,1,n+1){
        pre[i] = pre[i-1] + height[i-1] ;
    }
    int minsum = 5*1e7 + 1, minloc ;
    FOR(i,k,n+1){
        int sum = pre[i] - pre[i-k] ;
        //cout<<sum<<endl ;
        if(sum<minsum){
            minsum = sum ;
            minloc = i ;
        }
    }
    cout<<minloc-k+1 ;
    return 0;
}
