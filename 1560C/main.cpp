#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int k;
    cin>>k ;

    int x = ceil(sqrt(k)) ;
    int backLen = x*x - k + 1;
    int col = min(x, backLen) ;
    int row ;
    if(backLen - x >=0){
        row = x - (backLen-x) ;
    }
    else{
        row = x ;
    }
    cout<<row<<" "<<col<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
