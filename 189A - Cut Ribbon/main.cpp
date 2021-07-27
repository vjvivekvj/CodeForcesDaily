#include <iostream>
#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main()
{
    int n, a[3];
    cin>>n>>a[0]>>a[1]>>a[2] ;
    int dp[4][n+1] ;
    FOR(i,0,4){
        dp[i][0] = 1 ;
    }
    FOR(j,1,n+1){
        dp[0][j] = 0 ;
    }
    FOR(i,1,4){
        FOR(j,1,n+1){
            if(a[i-1]>j) dp[i][j] = dp[i-1][j] ;
            else{
                if(dp[i][j-a[i-1]]!=0) dp[i][j] = dp[i][j-a[i-1]] + 1;
                else dp[i][j] = 0 ;
                dp[i][j] = max(dp[i][j], dp[i-1][j]) ;

            }
           // cout<<dp[i][j]<<" " ;
        }
        //cout<<endl ;
    }
    cout<<dp[3][n]-1;
    return 0;
}
