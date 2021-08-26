#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>> n;
    int a[n] ;
    FOR(i,0,n){cin>>a[i];}
    // check if it is reverse sorted
    // or it has duplicates
    bool revSorted = 1, hasDuplicate = 0 ;
    for(int i=n-1; i>0; i--){
        if(a[i]==a[i-1]){
            hasDuplicate = 1 ;
            break ;
        }
        if(a[i]>a[i-1]){
            revSorted = 0 ;
            break ;
        }
    }
    if(hasDuplicate){
        cout<<"YES"<<endl;
        return ;
    }
    if(revSorted){
        cout<<"NO"<<endl ;
    }
    else{
        cout<<"YES"<<endl ;
    }
    return ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
