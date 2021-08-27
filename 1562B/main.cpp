#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t, vector<bool> primes){
    int k;
    cin>>k ;
    string s ;
    cin>>s ;
    for(int i=0; s[i]!='\0'; i++){
        int x = s[i] - '0' ;
        if(!primes[x]){
            cout<<1<<endl;
            cout<<x<<endl ;
            return ;
        }
    }
    for(int i=0; i<k-1; i++){
        for(int j=i+1; j<k; j++){
            int x = s[i]-'0', y = s[j] - '0' ;
            if(!primes[x*10 + y]){
                cout<<2<<endl ;
                cout<<x*10+y<<endl ;
                return ;
            }
        }
    }
}


int main() {
    int n = 100 ;
    vector<bool> primes(n+1, 1) ;
    primes[1] = 0 ;
    for(int i=2; i*i<=n; i++){
        if(primes[i])
            for(int j=i*i; j<=n; j+=i)
                primes[j] = 0 ;
    }
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i, primes) ;
	}
	return 0;
}
