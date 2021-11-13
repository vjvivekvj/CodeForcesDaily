#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
#define ll long long
using namespace std;



void solve(int t){
    ll a, b, c ;
    cin>>a>> b>> c ;
    ll x = a+c , y = 2*b ;
    if(abs(x-y)%3==0){
        cout<<0;
    }
    else{
        cout<<1;
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
