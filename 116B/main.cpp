#include <iostream>
#include <vector>
#include <utility>
#define FOR(i,a,b) for(int i=0; i<b; i++)
using namespace std;

int main()
{
    int n,m ;
    cin>>n>>m ;
    char grid[n][m] ;
    FOR(i,0,n){
        FOR(j,0,m){
            cin>>grid[i][j] ;
        }
    }
    int maxPigs = 0 ;
    bool changed = 1 ;
    while(changed){
        changed = 0 ;
        FOR(i,0,n){
            FOR(j,0,m){
                //check four adj cells
                // if only one pig in hand
                // eat the pig , go to sleep , set changed to 1
                // if no pig in hand, just sleep forever
                int pigsCount = 0 ;
                vector<pair<int,int>> pigPos;
                if(grid[i][j]=='W'){
                    if(i-1>=0 && grid[i-1][j]=='P'){
                        pigsCount++ ;
                        pigPos.push_back({i,j}) ;
                    }
                    if(i+1<n && grid[i+1][j]=='P'){
                        pigsCount++ ;
                        pigPos.push_back({i,j}) ;
                    }
                    if(j-1>=0 && grid[i][j-1]=='P'){
                        pigsCount++ ;
                        pigPos.push_back({i,j}) ;
                    }
                    if(j+1<m && grid[i][j+1]=='P'){
                        pigsCount++ ;
                        pigPos.push_back({i,j}) ;
                    }
                    if(pigsCount==1 || pigsCount==0){
                        changed = 1 ;
                        grid[i][j] = '.' ;
                    }
                    if(pigsCount==1){
                        grid[pigPos[0].first][pigPos[0].second] = '.' ;
                        maxPigs++ ;
                    }
                }
            }
        }
    }
    int cntWolf=0, cntPig = 0 ;
    FOR(i,0,n){
        FOR(j,0,m){
            if(grid[i][j] == 'W'){
                cntWolf++ ;
            }
            if(grid[i][j]=='P'){
                cntPig++ ;
            }
        }
    }
    maxPigs += min(cntWolf, cntPig) ;
    cout<<maxPigs<<endl ;
    return 0;
}
