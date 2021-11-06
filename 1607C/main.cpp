#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
#define ll long long
using namespace std;



void solve(int t){
    int n;
    cin>>n;
    ll a[n];
    FOR(i,0,n){cin>>a[i];}
    sort(a, a+n) ;
    ll mxmin = a[0], collected = a[0] ;
    FOR(i,1,n){
        a[i] -= collected ;
        collected += a[i] ;
        mxmin = max(a[i], mxmin) ;

    }
    cout<<mxmin<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
