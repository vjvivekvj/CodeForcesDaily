#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


struct Cave{
    int cnt ;
    int maxA ;
};

bool myCompare(Cave a, Cave b){
    return a.maxA < b.maxA ;
}
void solve(int t){
    int n; cin>>n ;
    Cave cave[n] ;

    FOR(i,0,n){
        int m ; cin>>m ;
        cave[i].cnt = m ;
        int maxA = INT_MIN ;
        FOR(j,0,m){
            int a; cin>>a ;
            if(a-j>maxA){
                maxA = a-j ;
            }
        }
        cave[i].maxA = maxA ;
    }

    sort(cave, cave+n, myCompare) ;
    long long power = cave[0].maxA + 1 ;
    long long morePower = 0 ;
    FOR(i,0,n){
        if(!(power>cave[i].maxA)){
            long long diff = cave[i].maxA - power ;
            morePower += diff+1 ;
            power = cave[i].maxA + 1 ;
        }
        power += cave[i].cnt ;
    }
    cout<<morePower + cave[0].maxA + 1 <<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
