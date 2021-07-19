#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int main()
{
    int n;
    cin>>n;
    int suml=0 , sumr=0, oddl=0, oddr=0 ,parity=0;
    FOR(i,0,n){
        int l, r ;
        cin>>l>>r ;
        suml+=l; sumr+=r ;
        if(l%2!=0) oddl++ ;
        if(r%2!=0) oddr++ ;
        if(l%2!=0 && r%2!=0) parity++ ;
    }
    if(suml%2==0 && sumr%2==0){
        cout<<0 ;
        return 0;
    }
    if((oddl+oddr)%2!=0){
        cout<<-1 ;
        return 0 ;
    }
    if((oddr+oddl)%2==0){
        if(oddl==oddr && oddl==parity){
            cout<<-1;
            return 0;
        }
        else{
            cout<<1 ;
        }
    }
    return 0;
}
