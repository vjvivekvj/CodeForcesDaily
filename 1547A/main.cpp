#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int xa, ya, xb, yb, xf, yf ;
    cin>> xa>>ya>>xb>>yb>>xf>>yf ;

    int moves = 0 ;
    moves += abs(xa-xb) + abs(ya-yb) ;

    if((xa==xb && xb==xf) && (yf<max(ya,yb)) && (yf>min(ya,yb))){
        moves += 2 ;
    }
    else if((ya==yb && yb==yf) && (xf<max(xa,xb)) && (xf>min(xa,xb))){
        moves += 2 ;
    }
    cout<<moves<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
