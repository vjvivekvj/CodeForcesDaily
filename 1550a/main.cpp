#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(vector<int>& sum){
    int s ;
    cin>> s ;
    // min size of the beautiful array with sum s

    for(int i=0; i<sum.size();i++){
        if(s<=sum[i]){
            cout<<i+1<<endl;
            break ;
        }
    }
    return  ;
}


int main() {
	int t ;
	cin>>t ;
	vector<int> sum ;
	sum.push_back(1) ;
	sum.push_back(4) ;
	int i=2;
	while(1){
        sum.push_back(2*sum[i-1] - sum[i-2] + 2) ;
        //cout<<sum[i]<<endl ;
        if(sum[i]>=5000){
            break ;
        }
        i++ ;
	}

	FOR(i,1,t+1){
	    solve(sum) ;
	}
	return 0;
}
