#include <iostream>
#include <vector> 
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    long long int n, s ;
    cin>>n>>s ;
    long long int temp = n*(n+1);
    temp /= 2 ;
    temp -= s ;
    if(temp>0 && temp<=n){
        cout<<temp ;
    }
    else{
        cout<<-1 ;
    }
    cout<<endl ;
}

int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}

