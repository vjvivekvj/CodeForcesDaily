#include <iostream>
#include <vector>
#include <queue>
#define FOR(i,a,b) for(int i=a; i<b; i++)

using namespace std;

int maxBFS(int src, vector<int> adj[], vector<bool>& visited){
    queue<int> q ;
    q.push(src) ;
    visited[src] = 1 ;
    int levels = 0 ;
    while(!q.empty()){
        ++levels ;
        int m = q.size() ;
        FOR(i, 0, m){
            int currNode = q.front();
            q.pop();
            FOR(j, 0, adj[currNode].size()){
                int nbr = adj[currNode][j] ;
                if(!visited[nbr])
                    q.push(nbr) ;
                    visited[nbr] = 1 ;
            }
        }
    }
    //cout<<"l "<<levels<<endl;
    return levels ;
}

int main()
{
    int n;
    cin>>n;

    vector<int> adj[n+1] ;
    vector<bool> visited(n+1, 0) ;
    vector<int> comp ;
    for(int i=1; i<n+1; i++){
        int sup ;
        cin>>sup ;
        if(sup!=-1){
           adj[sup].push_back(i) ;
        }
        else{
            comp.push_back(i) ;
        }
    }
    int maxLen = 0 ;
    for(int i=0; i<comp.size(); i++){
            maxLen = max(maxBFS(comp[i], adj, visited), maxLen) ;
    }
    cout<<maxLen<<endl ;
    return 0;
}
