#include <iostream>
#include <unordered_map>
typedef long long ll ;
using namespace std;

int main()
{
    long long n, q;
    long long p1=0, p2=0 ;
    cin>>n ;
    long long a[100001];
    for(long long i=0; i<n; i++){
        cin>>a[i] ;
    }
    unordered_map<ll, ll > left, right ;
    for(long long i=0; i<n; i++){
        left[a[i]] = i+1 ;
        right[a[i]] = n-i ;
    }
    cin>>q ;
    long long b[100001] ;
    for(long long i=0; i<q; i++){
        cin>>b[i] ;
        p1+= left[b[i]] ;
        p2+= right[b[i]] ;
    }
    cout<<p1<<" "<<p2;
    return 0;
}
