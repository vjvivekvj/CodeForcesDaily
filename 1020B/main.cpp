#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n;
    cin>>n ;
    int a[n+1] ;
    FOR(i, 1, n+1){cin>>a[i];}
    FOR(j,1,n+1){
        vector<int> v(n+1,0) ;
        int i=j ;
        while(!v[i]){
            v[i] = 1 ;
            i = a[i] ;
        }
        cout<<i<<" " ;
    }
    return 0;
}
