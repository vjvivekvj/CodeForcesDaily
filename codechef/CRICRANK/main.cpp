#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int a[6] ;
    int A=0, b=0 ;
    FOR(i,0,6){
        cin>>a[i] ;
    }
    FOR(i,0,3){
        if(a[i]>a[i+3]) A++ ;
        else b++ ;
    }
    if(A>b) cout<<"A" ;
    else cout<<"B" ;
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
