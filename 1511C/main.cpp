#include <iostream>
#include <vector>
#define FOR(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main()
{

    int n, q ;
    cin>>n>>q ;
    vector<int> colorHash(51, 0);
    FOR(i,1,n+1){
        int color ; cin>>color ;
        colorHash[color]==0? colorHash[color]=i : colorHash[color]=colorHash[color] ;
    }

    FOR(j,0,q){
        int t; cin>>t ;
        int ans = colorHash[t];
        colorHash[t] = 0 ;
        cout<<ans<<" ";
        FOR(i,1,51){
            colorHash[i]<ans? colorHash[i]+=1 : colorHash[i]=colorHash[i] ;
        }
    }
    return 0;
}
