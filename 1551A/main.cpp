#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>>n ;
    if(n%3==0){
        cout<<n/3<<" "<<n/3 ;
    }
    else if(n%3==1){
        cout<<n/3 + 1<<" "<<n/3 ;
    }
    else{
        cout<<n/3<<" "<<n/3+1 ;
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
