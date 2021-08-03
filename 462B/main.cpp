#include <iostream>
#include <algorithm>
#include <cstring>
#define FOR(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main()
{
    int n, k ;
    cin>>n>>k ;
    string s ;
    cin>>s ;
    int occ[26] ;
    memset(occ, 0, sizeof(occ)) ;
    FOR(i,0,n){
        occ[s[i] - 'A']++ ;
    }
    sort(occ, occ+26, greater<int>()) ;

    long long ans=0;
    FOR(i,0,26){
        if(occ[i]>k){
            ans+= (long long)k*(long long)k ;
            break ;
        }
        else{
            ans+= (long long)occ[i] * (long long)occ[i] ;
            k-= occ[i] ;
        }
    }
    cout<<ans<<endl ;
    return 0;
}
