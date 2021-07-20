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
    int cnt25=0, cnt50=0;
    FOR(i,0,n){
        int x ;
        cin>>x ;
        if(x==25){
            cnt25++ ;
        }
        if(x==50){
            cnt50++ ;
            if(cnt25>=1){
                cnt25-- ;
            }
            else{
                cout<<"NO"<<endl ;
                return 0;
            }
        }

        if(x==100){

            if(cnt25>=1 && cnt50>=1){
                cnt25-- ;
                cnt50-- ;
            }
            else if(cnt25>=3){
                cnt25-=3 ;
            }
            else{
                cout<<"NO";
                return 0 ;
            }
        }
    }
    cout<<"YES"<<endl ;
    return 0;
}
