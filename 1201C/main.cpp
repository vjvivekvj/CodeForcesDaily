#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;
int n ;
bool check(ll mid, int k, int a[]){
    ll extra = 0 ;
    for(int i=n/2; i<n; i++){
        extra += max(0ll, mid - a[i]) ;
    }
    return  k>= extra ;
}

ll bs(ll low, ll high, int a[], int k){

    while(low<=high){
        ll mid = (low+high)/2 ;
        if(check(mid, k, a)){
            // go right - higher median possible
            low = mid + 1 ;
        }
        else{
            // go left
            high = mid - 1 ;
        }
    }
    return high ;
}
int main()
{
    int k ;
    cin>>n>>k ;
    int a[n] ;
    for(int i=0; i<n; i++){
        cin>>a[i] ;
    }
    sort(a,a+n) ;

    //Search Space
    ll low, high ;
    low = a[n/2] ;  //median
    high = low + k ;    // max possible median

    cout<<bs(low, high, a, k) ;
    return 0;
}
