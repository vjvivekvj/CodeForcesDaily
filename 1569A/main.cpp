#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>>n ;
    string s ; cin>>s ;
    int l=0 ;
    bool flag = 0 ;
    FOR(i,0,n-1){

        if(s[i]!=s[i+1]){
            flag = 1 ;
            l = i+1 ;
            break ;

        }
    }
    if(flag){
        cout<<l<<" "<<l+1 ;
    }
    else{
        cout<<-1<<" "<<-1 ;
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
