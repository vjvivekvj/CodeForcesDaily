#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

void solve(int t){
    int n;
    cin>>n;
    string a,b ;
    cin>>a>>b ;
    int mexsum = 0;
    FOR(i,0,n){
        if(a[i]==b[i]){
            if(a[i]=='0'){
                // is the next column [1 1]?
                if(i+1<n && a[i+1]=='1' && b[i+1]=='1'){
                    mexsum += 2 ;
                    i++ ;
                }
                else{
                    mexsum += 1 ;
                }
            }
            else{
                // is the next column [0 0]?
                if(i+1<n && a[i+1]=='0' && b[i+1]=='0'){
                    mexsum += 2 ;
                    i++ ;
                }
            }
        }
        else{
            mexsum += 2 ;
        }
    }
    cout<<mexsum<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
