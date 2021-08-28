#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


int main()
{
    string s; cin>>s;
    int m; cin>>m ;
    int n = s.size() ;
    int pre[n] ;
    pre[0] = 0 ;
    FOR(i,0,n-1){
        if(s[i]==s[i+1]){
            pre[i+1] = pre[i] + 1 ;
        }
        else{
            pre[i+1] = pre[i] ;
        }
    }

    FOR(i,0,m){
        int l, r; cin>>l>>r ;
        cout<<pre[r-1]-pre[l-1]<<endl ;
    }
    return 0;
}
