#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>> n ;
    string prog, eng ;
    cin>>prog>>eng ;
    int cntTeams = 0 ;
    int knowsProg=0, knowsEng=0, knowsBoth=0, knowsNone=0;
    FOR(i,0,n){
        if(prog[i]=='1' && eng[i]=='1'){
            knowsBoth++ ;
        }
        else if(prog[i]=='0' && eng[i]=='1'){
            knowsEng++ ;
        }
        else if(prog[i]=='1' && eng[i]=='0'){
            knowsProg++ ;
        }
        else{
            knowsNone++ ;
        }
    }

    if(knowsNone>0){
        if(knowsBoth>=knowsNone){
            knowsBoth-=knowsNone ;
            cntTeams+=knowsNone ;
        }
        else{
            cntTeams += knowsBoth ;
            knowsBoth = 0 ;
        }
    }
    while(knowsBoth>0 && (knowsProg>0 || knowsEng>0)){
        if(knowsEng>=knowsProg){
            knowsEng-- ;
            knowsBoth-- ;
            cntTeams++ ;
        }
        else{
            knowsProg-- ;
            knowsBoth-- ;
            cntTeams++ ;
        }
    }
    cntTeams+= min(knowsEng, knowsProg) ;
    if(knowsBoth>0){
        cntTeams += knowsBoth/2 ;
    }
    cout<<cntTeams<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
