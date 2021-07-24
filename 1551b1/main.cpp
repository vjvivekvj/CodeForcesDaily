#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    string s ;
    cin>> s ;
    unordered_map<char, int> present ;
    int dup=0, unq=0;
    for(int i=0; s[i]!='\0'; i++){
        if(present[s[i]]==1){
            dup++ ;
            unq-- ;
        }
        else if(present[s[i]]==0){
            unq++ ;
        }
        present[s[i]]++ ;
    }
    cout<<dup+unq/2<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
