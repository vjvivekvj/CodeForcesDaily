#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


int main() {

	int n , q ;
	cin>>n>>q ;
	string s ;
	cin>>s ;
	int prefix[n+1] ;
	prefix[0] = 0 ;

	FOR(i,1,n+1){
        prefix[i] = prefix[i-1] + (s[i-1] - 'a') + 1 ;
        //cout<<prefix[i]<<" ";
	}
	FOR(i,0,q){
        int l, r ;
        cin>>l>>r ;
        cout<<prefix[r] - prefix[l-1]<<endl ;
	}

	return 0;
}
