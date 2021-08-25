#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n ;
    cin>>n ;
    string s ; cin>>s ;
    // start from left and find 1
    // start from right and find 0
    // everything between them, including 1 can be deleted
    // remaining string is the answer
    int left1 = -1 , right0 = -1 ;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='1'){
            left1 = i ;
            break ;
        }
        i++ ;
    }
    i=n-1 ;
    while(i>=0){
        if(s[i]=='0'){
            right0 = i ;
            break ;
        }
        i-- ;
    }
    if(left1>right0 || left1==-1 || right0 == -1){
        cout<<s<<endl ;
        return  ;
    }
    string ans ;
    for(int i=0; i<n; i++){
        if(i<left1 || i>=right0){
            ans += s[i] ;
        }
    }
    cout<<ans<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
