#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


int main()
{
    int n; cin>>n ;
    string s; cin>>s ;
    vector<int> mp[26] ;
    FOR(i,0,n){
        mp[s[i]-'a'].push_back(i+1) ;
    }
    int m; cin>>m;
    FOR(i,0,m){
        string frand ; cin>>frand ;
        vector<int> cnt(26,0) ;
        // count number of occurrences of each character of friend
        FOR(j,0,frand.size()){
            cnt[frand[j]-'a']++ ;
        }
        // find the last location of a char
        int ans = 0 ;
        FOR(j,0,26){
            if(cnt[j]==0) continue ;
            int buyLength = mp[j][cnt[j]-1] ;
            ans = max(ans, buyLength) ;
        }
        cout<<ans<<endl ;
    }
    return 0;
}
