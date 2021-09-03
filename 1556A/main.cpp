#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int c, d ;
    cin>>c>>d ;
    int diff = abs(c-d) ;
    if(diff%2!=0){
        cout<<-1<<endl ;
        return ;
    }
    if(c==0 && d==0){
        cout<<0<<endl ;
        return ;
    }
    if(diff==0){
        cout<<1<<endl ;
    }
    else{
        cout<<2<<endl ;
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
