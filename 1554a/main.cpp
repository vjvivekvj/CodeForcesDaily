#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n ;
    cin>>n ;
    long long int a[n], maxProd=1, prev=1 ;
    FOR(i,0,n){
        int x;
        cin>>x;
        maxProd = max(prev*x, maxProd) ;
        prev = x ;
    }
    cout<<maxProd<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
