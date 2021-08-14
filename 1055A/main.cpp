#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n, s ;
    cin>>n>>s ;
    int a[n+1], b[n+1] ;
    FOR(i,1,n+1){ cin>>a[i]; }
    FOR(i,1,n+1){ cin>>b[i]; }

    if(a[1]==0){cout<<"NO" ; return 0 ;}
    if(a[s]==1){cout<<"YES" ; return 0 ;}
    if(a[s]==0 && b[s]==0){cout<<"NO"; return 0 ;}
    if(a[s]==0 && b[s]==1){
        FOR(i, s+1, n+1){
            if(a[i]==1 && b[i]==1){cout<<"YES"; return 0; }
        }
    }
    cout<<"NO"<<endl ;
    return 0;
}
