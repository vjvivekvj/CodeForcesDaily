#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)

#define debug(x) cout << #x << " " << x <<endl
using namespace std;

bool myCompare(pair<int,int> a, pair<int,int> b){
    if(a.first!=b.first)
        return a.first>b.first ;
    else
        return a.second<b.second ;
}

int main(){

    int n, k ;
    cin>>n>>k ;
    vector<pair<int,int>> info ;
    FOR(i,0,n){
        int probs, penalty ;
        cin>>probs>>penalty ;
        info.push_back({probs, penalty});
    }

    sort(info.begin(), info.end(), myCompare) ;

    int prob = info[k-1].first ;
    int penalty = info[k-1].second ;

    int i = k - 1, cnt=0 ;
    while(i>=0 && info[i].first==prob && info[i].second==penalty){
        i-- ;
        cnt++ ;
    }
    i=k;
    while(i<n && info[i].first==prob && info[i].second==penalty){
        i++ ;
        cnt++ ;
    }
    cout<<cnt<<endl;
    return 0;
}
