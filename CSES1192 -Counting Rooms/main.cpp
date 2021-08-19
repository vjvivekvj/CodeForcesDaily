#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#define max 1001
#define FOR(i,a,b) for(int i=a; i<b; i++)
using namespace std;

char floorMap[max][max]  ;
bool visited[max][max] ;
int n, m;

void dfs(int rno, int cno){
    int r = n;
    int c = m;
    int i=rno, j=cno ;
    visited[i][j] = 1 ;
    if(i-1>=0 && !visited[i-1][j])
        dfs(i-1,j) ;
    //left
    if(j-1>=0 && !visited[i][j-1])
        dfs(i,j-1) ;
    //down
    if(i+1<r && !visited[i+1][j])
        dfs(i+1,j) ;
    //right
    if(j+1<c && !visited[i][j+1])
        dfs(i,j+1) ;
}

int main()
{

    cin>>n>>m ;

    FOR(i,0,n){
        FOR(j,0,m){
            cin>>floorMap[i][j] ;
            if(floorMap[i][j]=='#')
                visited[i][j] = 1 ;
            else
                visited[i][j] = 0 ;
        }
    }
    int rooms = 0 ;
    FOR(i,0,n){
        FOR(j,0,m){
            if(floorMap[i][j]=='.' && !visited[i][j]){
                dfs(i,j);
                rooms++ ;
            }
        }
    }
    cout<<rooms<<endl ;
    return 0;
}
