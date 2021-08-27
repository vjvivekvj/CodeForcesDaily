#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int l, r ;
    cin>>l>>r ;
    if(l<=r/2){
        cout<<r%(r/2 + 1)<<endl ;
    }
    else{
        cout<<r%l<<endl ;
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
