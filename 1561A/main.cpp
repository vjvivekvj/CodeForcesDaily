#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

void fun(int i, vector<int>& arr){
    if(i%2==0){
        for(int j=1; j<arr.size()-1; j+=2){
            if(arr[j]>arr[j+1]){
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    else{
        for(int j=0; j<arr.size()-2; j+=2){
            if(arr[j]>arr[j+1]){
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
}

void solve(int t){
    int n;
    cin>>n ;
    vector<int> arr(n);
    FOR(i,0,n){cin>>arr[i];}
    vector<int> arrcopy = arr ;
    sort(arrcopy.begin(), arrcopy.end()) ;
    int i=1;
    while(1){
        if(arrcopy==arr){
            break ;
        }
        fun(i, arr) ;
        i++ ;
    }
    cout<<i-1<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
