#include <iostream>
#define FOR(i,a,b) for(int i=a; i<b; i++)
typedef unsigned int uint ;
using namespace std;

int main()
{
    uint n ;
    cin>>n ;
    uint a[n] ;
    FOR(i,0,n){
        cin>>a[i] ;
    }
    uint minpos = 0;
    FOR(i,1,n){
        if(a[i]<a[minpos]){
            minpos = i ;
        }
    }
    FOR(i,0,n){
        if(a[i]==a[minpos] && i!=minpos){
            cout<<"Still Rozdil";
            return 0 ;
        }
    }
    cout<<minpos+1 ;
    return 0;
}
