#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int r;
    cin>>r ;
    if(r>=2000){
        cout<<1 ;
    }
    else if(r<2000 && r>=1600){
        cout<<2 ;
    }
    else{
        cout<<3 ;
    }
    cout<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
