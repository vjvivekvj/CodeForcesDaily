#include <iostream>
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
    // use two pointers technique and find max extra 0 you get
    int left=0, right=0, extra=0, maxExtra=0 ;
    while(right<n)
    {
       if(a[right]==1) extra-- ;
        else extra++ ;
        right++ ;
        if(extra<=0){
            left=right ;
            extra = 0 ;
        }
        maxExtra = max(extra, maxExtra) ;
    }
    // count 1s
    int cnt1 = 0 ;
    FOR(i,0,n){
        if(a[i]==1) cnt1++ ;
    }
    if(cnt1==n){
        cout<<n-1 ;             // if there are only 1s, then if we make any move, it will result in loss of 1s.
    }
    else
        cout<<maxExtra+cnt1<<endl;
    return 0;
}
