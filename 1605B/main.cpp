#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>>n;
    string s;
    cin>>s ;
    vector<int> z, o;
    FOR(i,0,n){
        if(s[i]=='0'){
            z.push_back(i+1) ;
        }
        else{
            o.push_back(i+1) ;
        }
    }

    sort(z.begin(), z.end());
    sort(o.begin(), o.end());

    if(!z.size() || !o.size()){
        cout<<0<<endl ;
        return ;
    }

    if(z[z.size()-1] < o[0])
        cout<<0<<endl ;
    else{
        cout<<1<<endl ;
        int k=0;
        vector<int> ans ;
        while(z[z.size()-1] > o[0]){
            k+=2 ;
            int temp = o[0] ;
            o[0] = z[z.size()-1] ;
            //cout<<temp<<" "<<o[0]<<endl ;
            ans.push_back(temp) ;
            ans.push_back(o[0]) ;
            z[z.size()-1] = temp ;
            sort(z.begin(), z.end()) ;
            sort(o.begin(), o.end()) ;
        }
        cout<<k<<" " ;
        sort(ans.begin(), ans.end()) ;
        FOR(i,0,ans.size()){
            cout<<ans[i]<<" " ;
        }
        cout<<endl ;
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
