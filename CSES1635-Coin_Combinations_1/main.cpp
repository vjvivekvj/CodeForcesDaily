#include <iostream>

using namespace std;

int main()
{
    int n, sum ;
    const int M = 1e9+7 ;
    cin>>n>>sum ;
    int coins[n] ;
    for(int i=0; i<n; i++){
        cin>>coins[i] ;
    }
    int dp[sum+1] ;
    dp[0] = 1 ;
    for(int i=1; i<=sum; i++){
        dp[i] = 0 ;
        for(int j=0; j<n; j++){
            if(i>=coins[j]){
                dp[i] = (dp[i] + dp[i-coins[j]])%M ;
            }
        }
    }

    cout<<dp[sum] ;
    return 0;
}
