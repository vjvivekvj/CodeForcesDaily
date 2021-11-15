#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>>n;
    int a[n], b[n] ;
    FOR(i,0,n){cin>>a[i];}
    FOR(i,0,n){cin>>b[i];}

    sort(a,a+n); sort(b,b+n) ;
    bool flag = 0 ;
    FOR(i,0,n){
        if(!(a[i]==b[i] || a[i]+1==b[i])){
        flag = 1;
        break ;
        }
    }

    if(flag) cout<<"NO";
    else cout<<"YES" ;
    cout << endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
