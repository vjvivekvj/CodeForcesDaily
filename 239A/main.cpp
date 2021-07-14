#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int y, k, n ;
    cin>>y>>k>>n ;
    int x = k - y%k ;
    if(x+y>n){
        cout<<-1 ;
    }
    else{
        for(int i=x; i<=n-y; i+=k){
            cout<<i<<" " ;
        }
    }

    return 0;
}
