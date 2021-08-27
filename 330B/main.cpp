#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m ;
    vector<int> hash(1e3+1, 0) ;
    FOR(i,0,m){
        int a, b ; cin>>a>>b ;
        hash[a] = 1 ; hash[b] = 1 ;
    }
    // 2 diameter is possible only when all nodes are connected to a center node
    // find a possible center
    int center ;
    FOR(i,1,n+1){
        if(!hash[i]){
            center = i ;
            break ;
        }
    }
    // spanning connected graph has always n-1 edges
    cout<<n-1<<endl ;
    FOR(i,1,n+1){
        if(i==center) continue ;
        else{
            cout<<center<<" "<<i<<endl ;
        }
    }
    return 0;
}
