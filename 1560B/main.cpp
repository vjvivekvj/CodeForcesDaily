#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int a, b, c ;
    cin>> a>>b>>c ;
    int n = abs(a-b) * 2 ;

    if(a<=n && b<=n && c<=n){
        if(c<=n/2)
            cout<<c+n/2 ;
        else
            cout<<c-n/2 ;
    }
    else{
        cout<<-1 ;
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
