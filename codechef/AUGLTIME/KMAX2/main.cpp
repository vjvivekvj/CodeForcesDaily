#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n, k;
    cin>>n>>k;
    int a[n] ;
    int max = -100001 ;
    FOR(i,0,n){
        cin>>a[i];
        if(a[i]>max){
            max = a[i] ;
        }
    }
    long long subs = 0 ;
    FOR(i,k-1,n){
        if(a[i]==max){
            subs+= n-i ;
        }
    }
    cout<<subs<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
