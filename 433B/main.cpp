#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n;
    cin>>n ;
    int v[n] ;
    FOR(i,0,n){
        cin>>v[i] ;
    }
    long long int pre[n+1], sortedPre[n+1] ;
    pre[0] = sortedPre[0] = 0 ;
    FOR(i,1,n+1){
        pre[i] = pre[i-1] + v[i-1] ;
    }
    sort(v,v+n) ;
    FOR(i,1,n+1){
        sortedPre[i] = sortedPre[i-1] + v[i-1] ;
    }
    int q ;
    cin>>q ;
    FOR(i,0,q){
        int l, r, t ;
        cin>>t>>l>>r ;
        if(t==1){
            cout<<pre[r] - pre[l-1] ;
        }
        else{
            cout<<sortedPre[r] - sortedPre[l-1] ;
        }
        cout<<endl ;
    }
    return 0;
}
