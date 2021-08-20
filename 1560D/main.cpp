#include <iostream>
#include <vector>
#include <unordered_map>
#define ll long long
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>>n ;
    vector<ll> powers ;
    FOR(i,0,60){
        powers.push_back(1LL<<i);
    }
    //compare powers with n
    // find least no. of operations
    string nstr = to_string(n) ;
    int leastDist=INT_MAX;
    FOR(i,0,60){
        string pstr = to_string(powers[i]) ;
        int dist = 0 ;
        int nptr = 0, pptr = 0 ;
        //cout<<pstr<<endl ;
        while(nstr[nptr]!='\0' && pstr[pptr]!=0){
            //cout<<nstr[nptr]<<" "pstr<<[pptr]<<endl ;
            if(nstr[nptr] == pstr[pptr]){
                nptr++ ;
                pptr++ ;
            }
            else{
                dist++ ;
                nptr++ ;
            }
        }
        if(pstr[pptr]!='\0'){
            dist += pstr.size() - pptr ;
        }
        if(nstr[nptr]!='\0'){
            dist += nstr.size() - nptr ;
        }
       // cout<<dist<<endl ;
        leastDist = min(dist, leastDist) ;
    }
    cout<<leastDist<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
