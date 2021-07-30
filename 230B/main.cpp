#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n ;
    cin>>n ;

    vector<bool> primes(1e7+1, 1) ;
    primes[0] = primes[1] = 0 ;
    for(int i=2; i*i<=1e7+1; i++){
        if(primes[i]){
            for(int j=i*i; j<=1e7+1; j+=i){
                primes[j] = 0 ;
            }
        }

    }

    FOR(i,0,n){
        long long x, y ;
        cin>>x ;
        y = sqrt(x) ;
        if(y*y==x && primes[y]){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
    return 0;
}
