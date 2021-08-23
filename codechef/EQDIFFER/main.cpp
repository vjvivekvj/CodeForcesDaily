#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n ;
    cin>>n ;
    int arr[n] ;
    FOR(i,0,n){cin>>arr[i];}
    if(n<=2){
        cout<<0<<endl ;
        return ;
    }
    unordered_map<int, int> m ;
    int maxOc=0, maxEl ;
    FOR(i,0,n){
        m[arr[i]] ++ ;
        if(m[arr[i]]>maxOc){
            maxOc = m[arr[i]] ;
            maxEl = arr[i] ;
        }
    }
    if(maxOc==1){
        cout<<n-2<<endl ;
        return ;
    }
    int res=0 ;
    FOR(i,0,n){
        if(arr[i]!=maxEl){
            res++ ;
        }
    }
    cout<<res<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
