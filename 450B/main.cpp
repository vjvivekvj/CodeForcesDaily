#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl

using namespace std;

int main()
{
    const int MOD = 1e9 + 7 ;
    int x, y, n ;
    cin>>x>>y>>n ;
    int f[4] ;
    f[1] = (x+MOD) % MOD ;
    f[2] = (y+MOD) % MOD ;
    f[3]= (f[2] - f[1] + MOD)%MOD ;

    if(n==1){
        cout<<f[1] ;
    }
    else if(n==2){
        cout<<f[2] ;
    }
    else if(n==3){
        cout<<f[3] ;
    }
    else{
        int multiple ;
        multiple = n/3 ;
        n%3==0? multiple-=1 : multiple=multiple;
        int result = f[n - multiple*3] ;
        if(multiple%2!=0) result = -1*result ;
        cout<<(result+MOD)%MOD<<endl ;
    }
    return 0;
}
