#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n ;
    cin>>n ;
    int sum=0, avg;
    FOR(i,0,n){
        int x ;
        cin>>x ;
        sum+= x ;
    }
    avg = sum/n ;
    if(sum==avg*n) cout<<n ;
    else cout<<n-1 ;
    return 0;
}
