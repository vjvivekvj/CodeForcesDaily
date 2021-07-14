#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int a,b,c ;
    int M=1073741824;
    cin>>a>>b>>c ;
    int n = a*b*c ;
    vector<int> factors(n+1,2) ;
    factors[1] = 1 ;
    //fill the factors matrix
    for(int i=2; i<=n/2; i++){
        for(int j=i*2; j<=n; j+=i){
            factors[j]++ ;
        }
    }
    //compute the sum % 2^30
    int sum = 0 ;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){
                int div = i*j*k ;
                sum = sum + factors[div] % M ;
            }
        }
    }
    cout<<sum ;
    return 0;
}
