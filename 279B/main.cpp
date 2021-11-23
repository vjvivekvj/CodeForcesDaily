#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n, m, sum=0, ans=0;
    cin>>n>>m ;
    int a[n] ;
    FOR(i,0,n){
        cin>>a[i] ;
    }
    int i=0, j=0 ;
    while(i<n){

        // keep adding until sum becomes greater than m

        while(j<n && sum + a[j]<=m){
            sum += a[j] ;
            j++ ;
        }
        ans = max(ans, j-i) ;
        // When sum becomes greater than m, remove the value of first hotel
        sum -= a[i] ;
        //cout<<"sum after removing i "<<sum<<endl ;
        i++ ;
    }

    cout<<ans<<endl ;
    return 0;
}
