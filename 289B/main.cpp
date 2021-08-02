#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n, m, d ;
    cin>>n>>m>>d ;
    int a[n*m] ;
    for(int i=0; i<n*m; i++){
        cin>>a[i] ;
    }
    FOR(i,1,n*m){
        if( abs(a[i]-a[i-1]) % d !=0){
            cout<<-1 ;
            return 0 ;
        }
    }
    sort(a, a+n*m) ;
    // find median
    int median ;
    if((n*m)%2!=0){
        median = a[(m*n-1)/2] ;
    }
    else{
        median = a[m*n/2] ;
    }
    // calculate number of moves
    int moves = 0 ;
    FOR(i,0,n*m){
        moves += abs(median-a[i])/d ;
    }
    cout<<moves<<endl ;
    return 0;
}
