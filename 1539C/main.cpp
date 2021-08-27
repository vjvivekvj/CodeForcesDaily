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
    long long k , x ;
    cin>>n>>k>>x ;
    long long a[n] ;
    FOR(i,0,n){cin>>a[i];}
    if(n==1){
        cout<<1<<endl ;
        return 0;
    }
    sort(a,a+n) ;
    vector<long long> diff ;
    //check the partitions, store the difference
    FOR(i,1,n){
        if(a[i]-a[i-1]>x){
            diff.push_back(a[i]-a[i-1]) ;
        }
    }
    //greedy, sort the partitions, first fill the min distance gaps
    sort(diff.begin(), diff.end()) ;
    //allocate k's in the gaps
    int i=0, cnt=0 ;
    while(i<diff.size()){
        k-= (diff[i]-1)/x ;
        if(k >= 0){
            i++ ;
            cnt++ ;
        }
        else{
            break ;
        }
    }
    cout<<diff.size() - cnt + 1<<endl ;
    return 0;
}
