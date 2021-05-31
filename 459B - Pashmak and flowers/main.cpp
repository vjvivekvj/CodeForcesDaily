#include <iostream>
#define FOR(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main()
{

    long long unsigned int n;
    cin>>n;
    long long unsigned int a[n] ;
    FOR(i,0,n){
        cin>>a[i] ;
    }
    int small=0, large=0;
    FOR(i,1,n){
        if(a[i]<a[small]) small = i ;
        if(a[i]>a[large]) large = i ;
    }
    if(a[small]==a[large]){
        cout<<0<<" "<<((n-1)*n)/2 ;
        return 0 ;
    }
    long long unsigned int cntmin=0, cntmax=0 ;
    FOR(i,0,n){
        if(a[i]==a[small]) cntmin++ ;
        if(a[i]==a[large]) cntmax++ ;
    }
    cout<<a[large]-a[small]<<" "<<cntmin*cntmax ;
    return 0;
}
