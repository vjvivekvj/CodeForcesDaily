#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

void solve(int t){
    int n;
    cin>>n ;
    int a[n] ;
    FOR(i,0,n){cin>>a[i];}

    // find leftmost set bit
    // keep a count in bit array
    vector<long long> bit(32,0) ;

    FOR(j,0,n){
        for(int i=31; i>=0; i--){
            if(1<<i & a[j]){
                bit[i]++ ;
                break ;
            }
        }
    }
    // answer is sum of all pairs who have same position of leftmost set bit
    // total number of pairs = select 2 out of n -> nC2 ->  (bit[i] * (bit[i] - 1))/2
    long long ans = 0 ;
    FOR(i,0,32){
        ans += (bit[i] * (bit[i]-1))/2 ;
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
