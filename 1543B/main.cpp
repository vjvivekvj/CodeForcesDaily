#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n ;
    cin>> n ;
    long long sum = 0 ;
    FOR(i,0,n){
        int x ;
        cin>>x ;
        sum+= x ;
    }
    long long avg = sum/n;
    long long a, b;
    b = sum - (avg*n);
    a = n - b ;
    cout<<a*b<<endl ;
    return ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
