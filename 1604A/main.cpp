#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
#define ll long long
using namespace std;



void solve(int t){
    int n;
    cin>>n ;
    int a[n] ;
    FOR(i,1,n+1){cin>>a[i];}
    ll minop = 0 ;
    FOR(i,1,n+1){
        int diff = a[i] - (minop + i) ;
        if(diff>0){
            minop += diff ;
        }
    }
    cout<<minop<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
