#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n, m ;
    cin>>n>>m ;
    vector<string> check(m);
    //take input
    FOR(i,0,(2*n-1)){
        string s ;
        cin>>s;
        // make new strings of column characters
        FOR(j,0,m){
            check[j] += s[j];
        }
    }

    // if a character column wise is odd then store that and finally output after all iterations
    string result ;
    FOR(i,0,m){
        vector<int> freq(26,0) ;
        int j=0 ;
        while(check[i][j]!='\0'){
            freq[check[i][j]-'a']++ ;
            j++ ;
        }

        int x=0;
        while(x<26){
            if(freq[x]%2==1){
                result+= x + 'a' ;
                break ;
            }
            x++ ;
        }
    }

    cout<<result<<endl;
    cout<<flush;

}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
