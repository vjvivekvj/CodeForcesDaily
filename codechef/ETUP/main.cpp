#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

long long int C(int n, int r){
    if(n<r) return 0 ;
    long long int ans = 1;
    int i=n, j=1 ;
    while(j<=r){
        ans *= i ;
        ans /= j ;
        i-- ;
        j++ ;
    }
    return ans ;
}

void solve(int t){
    int n, q ;
    cin>>n>>q ;
    int prefixOdd[n+1], prefixEven[n+1] ;
    prefixEven[0] = prefixOdd[0] = 0 ;
    FOR(i,1,n+1){
        int x ;
        cin>>x ;
        if(x%2==0){
            prefixEven[i] = prefixEven[i-1] + 1 ;
            prefixOdd[i] = prefixOdd[i-1] ;
        }
        else{
            prefixEven[i] = prefixEven[i-1] ;
            prefixOdd[i] = prefixOdd[i-1] + 1 ;
        }
    }
    //QUERIES
    FOR(i,0,q){
        int l,r ;
        cin>>l>>r ;
        int nOdd, nEven ;
        nOdd = prefixOdd[r] - prefixOdd[l-1] ;
        nEven = prefixEven[r] - prefixEven[l-1] ;
        long long int teamsOOE, teamsEEE ;
        teamsEEE = C(nEven, 3) ;
        teamsOOE = C(nOdd, 2) * C(nEven, 1) ;
        cout<<teamsEEE + teamsOOE<<endl ;
    }
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
