#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


int main()
{
    int n, m;
    cin>>n>>m ;
    long long a[n+1] ;
    FOR(i,1,n+1){cin>>a[i];}

    int add = 0;
    FOR(i,0,m){
        int t; cin>>t ;
        if(t==1){
            int idx, newVal ;
            cin>>idx>>newVal ;
            a[idx] = newVal-add ;
        }
        else if(t==2){
            int toAdd ;
            cin>>toAdd;
            add += toAdd ;
        }
        else{
            int idx ;
            cin>>idx ;
            cout<<a[idx] + add<<endl ;
        }
    }


    return 0;
}
