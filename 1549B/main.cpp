#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n ;
    cin>>n ;
    string a, b ;
    cin>>a>>b ;
    int cnt=0;
    vector<int> occupied(n,0) ;
    for(int i=0; i<n; i++){
        if(b[i]=='1'){
            if(a[i]=='0'){
                cnt++;
            }
            else if(i>0 && a[i-1]=='1' && !occupied[i-1]){
                cnt++ ;
            }
            else if(i<n-1 && a[i+1]=='1'){
                cnt++ ;
                occupied[i+1] = 1 ;
            }
        }
    }
    cout<<cnt<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
