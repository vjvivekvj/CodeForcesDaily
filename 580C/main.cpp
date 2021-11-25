#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> graph[100001] ;    // array of vectors
bool cats[100001];

int dfs(int v, int catsCount, vector<bool>& visited, int m){
    visited[v] = 1;

    if(cats[v]) catsCount++ ;
    else catsCount = 0 ;

    if(catsCount>m) return 0;   //cant go any further

    bool nonleaf = 0 ;
    int ans = 0 ;
                                // call dfs for every child of v
    for(auto u:graph[v]){
        if(!visited[u]){
            ans += dfs(u, catsCount, visited, m) ;
            nonleaf = 1;
        }
    }

    // non leaf node? -> return what you get by calling dfs on child nodes
    // else leaf -> we reached a restaurant -> return 1
    if(nonleaf) return ans ;
    else return 1;
}

int main()
{
    int n, m;
    cin>>n>>m ;

    for(int i=1; i<n+1; i++){
        cin>>cats[i] ;
    }

    //Graph creation
    for(int i=0; i<n-1; i++){
        int x, y;
        cin>>x>>y;
        graph[x].push_back(y) ;
        graph[y].push_back(x) ;
    }

    vector<bool> visited(n+1,0) ;
    cout<<dfs(1, 0, visited, m)<<endl ;

    return 0;
}
