#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    char iq[4][4] ;
    FOR(i,0,4){
        FOR(j,0,4){
            cin>>iq[i][j] ;
        }
    }
    FOR(i,0,3){
        FOR(j,0,3){
            char testChar = iq[i][j] ;
            int diffChar = 0 ;
            if(iq[i+1][j] != testChar) diffChar++ ;
            if(iq[i][j+1] != testChar) diffChar++ ;
            if(iq[i+1][j+1] != testChar) diffChar++ ;

            if(diffChar%2!=0 || diffChar==0){
                cout<<"YES" ;
                return 0;
            }
        }
    }
    cout<<"NO" ;
    return 0;
}
