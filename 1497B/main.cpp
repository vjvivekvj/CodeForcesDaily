#include <iostream>
#include <vector>
#include <unordered_map>
#define ll long long
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n, m;
    cin>>n>>m ;
    vector<int> cnt (100005,0) ;

    FOR(i,0,n){
        int x ; cin>>x ;
        cnt[x%m]++ ;
    }
    int ans = 0 ;
    for(int i=0; i<=m/2; i++){
        int pr = m-i ;
        int diff = abs(cnt[i] - cnt[pr]) ;
        if(cnt[i]==0 && cnt[pr]==0) ans += 0 ;
        else if(i==0 && cnt[i]>0) ans++ ;
        else if(diff<=1) ans++ ;
        else ans += diff ;
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
