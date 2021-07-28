#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


int main()
{
    int n;
    cin>>n ;
    int givenPer[n] ;
    FOR(i,0,n){
        cin>>givenPer[i] ;
    }
    sort(givenPer, givenPer+n) ;
    long long moves = 0 ;
    FOR(i,1,n+1){
        moves+= abs(i - givenPer[i-1]) ;
    }
    cout<<moves<<endl ;
    return 0;
}
