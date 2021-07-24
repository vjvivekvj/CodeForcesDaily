#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n, m, l ;
    cin>>n>>m>>l ;
    int colorHash[n+1] ;
    FOR(seg, 1, m+1){
        int sz ;
        cin>>sz;
        FOR(j,0,sz){
            int color ;
            cin>>color ;
            colorHash[color] = seg;
        }
    }
    int prevSeg = 0, cnt=0 ;
    FOR(i,0,l){
        int color ;
        cin>>color ;
        if(colorHash[color]!=prevSeg){
            cnt++ ;
            prevSeg = colorHash[color] ;
        }
    }
    cout<<cnt<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
