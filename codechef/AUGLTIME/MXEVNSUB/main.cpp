#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n ;
    cin>>n ;

    if(n%2==0){
        if(n%4!=2)
            cout<<n<<endl;
        else{
            cout<<n-1<<endl ;
        }
        return ;
    }
    else{
        if(n%4==3){
            cout<<n<<endl ;
        }
        else{
            cout<<n-1<<endl ;
        }
    }
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
