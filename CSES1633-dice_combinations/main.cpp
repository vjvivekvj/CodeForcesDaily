#include <iostream>

using namespace std;



int main()
{
    const int M = 1e9+7 ;
    int n;
    cin>>n ;
    int dp[n+1] ;
    dp[0] = 1 ;

    for(int i=1; i<n+1; i++){
        dp[i] = 0 ;
        for(int j=1; j<=6; j++){
            if(i-j>=0){
                dp[i] = (dp[i] + dp[i-j]) % M ;
            }
            else{
                break ;
            }
        }
    }
    cout<<dp[n]<<endl ;
    return 0;
}
