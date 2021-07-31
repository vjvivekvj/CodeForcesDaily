#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m ;
    int a[n] ;
    FOR(i,0,n){
        cin>>a[i] ;
    }

    vector<bool> h(100001, 0) ;
    int info[n], cnt=0 ;

    for(int i=n-1; i>=0; i--){
        if(!h[a[i]]){
            h[a[i]] = 1 ;
            cnt++ ;
        }
        info[i] = cnt ;
    }

    FOR(i,0,m){
        int l;
        cin>>l ;
        cout<<info[l-1]<<endl ;
    }
    return 0;
}
