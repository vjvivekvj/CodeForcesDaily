#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


void solve(int t){
    int n;
    cin>>n ;
    long long a[n] ;

    FOR(i,0,n){
        cin>>a[i] ;
    }
    long long dp[n] ;
    dp[n-1] = a[n-1] ;
    long long maxScore = dp[n-1] ;
    for(int i=n-2; i>=0; i--){
        dp[i] = a[i] ;
        if(i+a[i]<n)
            dp[i]+= dp[i+a[i]] ;
        maxScore = max(dp[i], maxScore) ;
    }
    cout<<maxScore<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
