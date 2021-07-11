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
    int lmin = 1e9 + 1, rmax = 0, segment = -1;
    FOR(i,0,n){
        int li, ri ;
        cin>>li>>ri ;
        // found a seg that covers everything
        if(li<=lmin && ri>=rmax){
                lmin = li ;
                rmax = ri ;
                segment = i+1 ;
        }
        // oh no! a segment that starts before our covering segment
        else if(li<lmin){
                segment = -1 ;
                lmin = li ;
        }
        // oh no! a segment that stretches out of our covering segment
        else if(ri>rmax){
            segment = -1 ;
            rmax = ri ;
        }
    }

    cout<<segment ;
    return 0;
}
