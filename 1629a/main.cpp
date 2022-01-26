#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


struct soft{
    int a, b ;
};

bool myCompare(soft x, soft y){
    if(x.a != y.a){
        return x.a < y.a ;
    }
    else return x.b > y.b ;
}

void solve(int t){
    int n, k; cin>>n>>k;
    soft softwares[n] ;
    FOR(i,0,n){
        cin>> softwares[i].a ;
    }
    FOR(i,0,n){
        cin>> softwares[i].b ;
    }

    sort(softwares, softwares+n, myCompare) ;

    int curr_ram = k ;

    FOR(i,0,n){
        if(softwares[i].a <= curr_ram){
            curr_ram += softwares[i].b ;
            //cout<<curr_ram<<" " ;
        }
        else{
            break;
        }
    }
    //cout<<endl ;
    cout<<curr_ram<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
