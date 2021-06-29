#include <iostream>
#include <vector>
using namespace std;


void sieve(int n){
    int m = n ;
    n = n*20 ;
    vector<bool> prime(n, 1) ;
    prime[0] = prime[1] = 0 ;
    for(int i=2; i*i<=n; i++){
        if(prime[i]){
            for(int j=i*i; j<=n; j+=i){
                prime[j]=0 ;
            }
        }
    }
    int cnt = 0 ;
    int i=2 ;
    while(cnt!=m){
        if(prime[i]){
            cout<<i<<" " ;
            cnt++ ;
        }
        i++ ;
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
