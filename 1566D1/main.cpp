#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

struct Person{
    int sight;
    int id ;
};

bool myCompare(Person a, Person b){
    if(a.sight!=b.sight){
        return a.sight < b.sight ;
    }
    else{
        return a.id > b.id ;
    }
}

void solve(int t){
    int n, m ;
    cin>>n>>m ;
    Person p[n*m] ;
    FOR(i,0,n*m){
        cin >> p[i].sight ;
        p[i].id = i+1 ;
    }
    sort(p, p+(n*m), myCompare) ;
    int ans = 0 ;
    FOR(i,0,m*n){
        FOR(j,0,m*n){
            if(i+1==p[j].id) break ;
            else if(p[j].id < i+1) ans++ ;
        }
    }
    cout<<ans<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
