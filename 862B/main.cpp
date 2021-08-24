#include <iostream>
#include <cstring>
#include <vector>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define MAX 100001

using namespace std;


void recFun(int node, bool member[], bool visited[], vector<int> adj[]){
    vector<int> nbrs = adj[node] ;
    FOR(i,0,nbrs.size()){
        int nbr = nbrs[i] ;
        if(!visited[nbr]){
            visited[nbr] = 1 ;
            member[nbr] = 1 - member[node] ;
            recFun(nbr, member, visited, adj) ;
        }
    }
}

int main()
{
    int n ;cin>>n ;
    vector<int> adj[n+1] ;
    FOR(i,1,n){
        int x, y; cin>>x>>y ;
        adj[x].push_back(y) ;
        adj[y].push_back(x) ;
    }
    bool member[n+1] , visited[n+1];
    memset(member, 0, sizeof(member)) ;
    memset(visited, 0, sizeof(visited)) ;
    member[1] = 0; visited[1] = 1 ;
    recFun(1,member,visited,adj) ;

    //calculate 0's (u's) and 1's (v's) in member
    long long int cntU = 0 , cntV = 0;
    FOR(i,1,n+1){
        if(member[i]) cntV++;
        else cntU++ ;
    }
    cout<<cntU*cntV - (n-1)<<endl ;
    return 0;
}
