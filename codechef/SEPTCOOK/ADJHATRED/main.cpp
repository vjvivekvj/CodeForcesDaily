#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>>n;
    int a[n] ;
    bool even=0, odd=0 ;
    FOR(i,0,n){
        cin>>a[i] ;
        if(a[i]%2==0) even = 1 ;
        else odd = 1;
    }
    if(!odd || !even){
        cout<<-1<<endl ;
        return ;
    }
    FOR(i,0,n){
        if(a[i]%2==0){
            cout<<a[i]<<" " ;
        }
    }
    FOR(i,0,n){
        if(a[i]%2!=0){
            cout<<a[i]<<" " ;
        }
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
