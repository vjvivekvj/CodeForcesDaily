#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

struct Block{
    int val ;
    int pos ;
};

bool myCompare(Block a, Block b){
    if(a.val!=b.val){
        return a.val>b.val ;
    }
    else{
        return a.pos<b.pos ;
    }
}
void solve(int t){
    int n;
    cin>>n ;
    int a[n] ;
    FOR(i,0,n){
        cin>>a[i];
    }
    int max = -100001 ;
    FOR(i,0,n){
        if(max<a[i]){
            max = a[i] ;
        }
    }
    if(a[0]!=max){
        cout<<-1<<endl ;
        return ;
    }
    int prev = a[n-1], moves=1 ;
    for(int i=n-2; i>0; i--){
        if(a[i]>prev){
            moves++ ;
            prev = a[i] ;
        }
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
