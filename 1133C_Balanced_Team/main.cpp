#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n;
    cin>>n ;
    int a[n] ;
    FOR(i,0,n){
        cin>>a[i] ;
    }
    sort(a,a+n);
    int l=0, r=1, cnt=1, mxcnt=1 ;
    while(r<n){
        if(a[r]-a[l]<=5){
            r++ ;
            cnt++ ;
            mxcnt = max(cnt, mxcnt) ;
        }
        else{
            l++ ;
            cnt-- ;
        }
    }
    cout<<mxcnt ;
    return 0;
}
