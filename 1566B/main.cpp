#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    string s ;
    cin>>s ;
    // there can only be 3 answers - 0,1,or 2
    bool zero=0, one=0, two=0 ;
    FOR(i,0,s.size()){
        if(s[i]=='1' && zero){
            one=1;
        }
        else if(s[i]=='0' && !zero){
            zero=1;
        }
        else if(s[i]=='0' && zero && one){
                two=1;
        }
    }

    if(!zero) cout<<0 ;
    else if(!one) cout<<1 ;
    else if(two) cout<<2 ;
    else cout<<1 ;
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
