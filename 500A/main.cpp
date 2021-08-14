#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n, t ;
    cin>>n>>t ;
    int portal[n+1] ;
    FOR(i, 1, n+1){cin>>portal[i];}
    int i = 1;
    while(i<=t){
        if(i==t){cout<<"YES"; return 0;}
        i+= portal[i] ;
    }
    cout<<"NO";
    return 0;
}
