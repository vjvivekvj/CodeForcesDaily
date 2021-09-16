#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n ;
    cin>>n ;
    if(n%2==0){
        FOR(i,0,n){
            FOR(j,0,n){
                cout<<-1<<" " ;
            }
            cout<<endl ;
        }
    }
    else{
        FOR(i,0,n){
            FOR(j,0,n){
                if(i==j){
                    cout<<-1<<" " ;
                }
                else{
                    cout<<1<<" " ;
                }
            }
            cout<<endl ;
        }
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
