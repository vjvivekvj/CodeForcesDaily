#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n ;
    cin>>n ;
    int a[n];
    FOR(i,0,n){cin>>a[i];}
    int h=1; bool flag = 0 ;    // flag: any subarray has more than one element
    for(int i=n-1; i>0; i--){
        if(a[i]<=a[i-1]){
            flag = 1 ;
        }
        else{
            h++ ;
        }
    }

    if(h%2==0 || flag){
        cout<<"YES"<<endl ;
    }
    else{
        cout<<"NO"<<endl ;
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
