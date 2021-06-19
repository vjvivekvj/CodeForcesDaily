#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

void solve(int t){
    int n ;
    cin>> n ;
    int sum = 0 ;
    FOR(i,0,n){
        int x ;
        cin>>x ;
        sum+=x ;
    }
    if(n-sum>=1){
        cout<<1 ;
    }
    else cout<<sum - n ;
    cout<<endl ;
}


int main() {
    int t ;
    cin>>t ;
    FOR(i,1,t+1){
        solve(i) ;
    }
    return 0;
}
