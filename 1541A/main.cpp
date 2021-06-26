#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n ;
    cin>>n ;

    if(n%2==0){
        FOR(i,1,n+1){
            if(i%2==1) cout<<i+1<<" " ;
            else cout<<i-1<<" " ;
        }
    }
    else{
        int i=1 ;
        while(i+2<n){
            if(i%2==1) cout<<i+1<<" " ;
            else cout<<i-1<<" " ;
            i++ ;
        }
        cout<<n<<" "<<i<<" "<<i+1 ;
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
