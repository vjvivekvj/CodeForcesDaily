#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <utility>
#define ll long long
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n, k;
    cin>>n>>k ;
    ll a[n] ;
    FOR(i,0,n){cin>>a[i] ;}

    queue<pair<int , int>> q;

    // push non zero elements to queue
    vector<bool> visited(n,0) ;
    FOR(i,0,n){
        if(a[i]>0){
            q.push({i,k}) ;
            visited[i] = 1 ;
        }
    }

    // non zero element will have an effect of 2*current value of k
    // value of k decreases each time we go to further levels.

    while(q.size()>0){
        int curr = q.front().first ;
        int curr_k = q.front().second ;
        q.pop() ;
        // find left and right index
        int left, right ;
        curr==0? left = n-1 : left = curr - 1;
        curr==n-1? right =0 : right = curr + 1 ;

        // increment left and right by curr k ;
        a[left] += curr_k ; a[right]+= curr_k ;

        // push left and right to queue if more time is left i.e curr_k -1 > 0
        if(curr_k - 1 > 0){
            if(!visited[left]){
                q.push({left, curr_k-1}) ;
                visited[left] = 1 ;
            }
            if(!visited[right]){
                q.push({right, curr_k-1}) ;
                visited[right] = 1 ;
            }
        }
    }
    ll sum = 0 ;
    FOR(i,0,n){sum+=a[i];}
    cout<<sum<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
