#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
#include <algorithm>
using namespace std;



void solve(int t){
    int A[2], A1[2] , A2[2] ;
    cin>>A[0]>>A[1]>>A1[0]>>A1[1]>>A2[0]>>A2[1];
    sort(A, A+2); sort(A1,A1+2); sort(A2,A2+2) ;
    if(A[0]==A1[0] && A[1]==A1[1]){
        cout<<1<<endl ;
    }
    else if(A[0]==A2[0] && A[1]==A2[1]){
        cout<<2<<endl ;
    }
    else{
        cout<<0<<endl ;
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
