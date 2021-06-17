#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


int binary_search(int a[], int low, int high, int x){

	int mid = (low + high)/2 ;

    if(low<=high){
        if(a[mid]>x){
            high = mid - 1 ;
            return binary_search(a, low, high, x) ;
        }
        else{
            low = mid + 1;
            return binary_search(a, low, high, x);
        }
    }
    return high;
}

void solve(){
    int n;
    cin>>n;
    int a[n] ;
    FOR(i,0,n){
    	cin>>a[i] ;
    }
    sort(a,a+n) ;
    int nq ;
    cin>>nq ;
    while(nq--){
    	int q;
    	cin>>q ;
    	cout<<binary_search(a, 0, n-1, q)+1<<endl ;
    }
}


int main() {

    solve() ;

	return 0;
}
