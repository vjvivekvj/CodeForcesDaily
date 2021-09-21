#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n, k ;
    cin>>n>>k ;
    string zebra; cin>>zebra ;
    int blocks = 0 ;
    int lastZero = -1, lastOne = -1 ;
    int prev = zebra[0] ;
    FOR(i,1,n){
        if(zebra[i]!=prev){
            blocks++ ;
            prev = zebra[i] ;
        }
    }

    if(blocks<k){
        cout<<-1<<endl ;
        return ;
    }
    for(int i=n-1; i>=0; i--){
        if(lastZero==-1 && zebra[i]=='0'){
            lastZero = i ;
        }
        if(lastOne==-1 && zebra[i]=='1'){
            lastOne = i ;
        }
        if(lastOne!=-1 && lastZero!=-1) break ;
    }
    if(k%2==0 && zebra[0]=='1'){
        cout<<lastOne+1<<endl ;
    }
    else if(k%2!=0 && zebra[0]=='1'){
        cout<<lastZero+1<<endl ;
    }
    else if(k%2==0 && zebra[0]=='0'){
        cout<<lastZero+1<<endl;
    }
    else if(k%2!=0 && zebra[0]=='0'){
        cout<<lastOne+1<<endl ;
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
