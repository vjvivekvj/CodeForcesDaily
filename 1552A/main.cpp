#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>>n ;
    string s ;
    cin>>s ;
    string org = s ;
    sort(s.begin(), s.end()) ;
    int cnt = 0 ;
    FOR(i,0,n){
        if(s[i]!=org[i]) cnt++ ;
    }
    cout<<cnt<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
