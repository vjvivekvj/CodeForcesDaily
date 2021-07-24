#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    double x,y ;
    cin>>x>>y ;
    double p;
    p = ((double)6 - (x+y))/double(6) ;
    if(p<0) p=0 ;
    cout<<p<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
