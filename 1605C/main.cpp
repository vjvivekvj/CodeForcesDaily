#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>> n;
    string s; cin>>s ;

    vector<int> o ;

    FOR(i,0,n){
        if(s[i]=='a'){
            o.push_back(i) ;
        }
    }

    if(!o.size() || o.size()==1){cout<<-1<<endl; return; }

    int minDistance = INT_MAX ;
    FOR(i,1,o.size()){
        minDistance = min(minDistance, o[i]-o[i-1]) ;
    }

    if(minDistance==1){cout<<2<<endl; return;}
    if(minDistance==2){cout<<3<<endl; return;}

    if(minDistance==3){
        // find a pair with different characters in between the 2 a's
        // if they exist output 4
        // else check for 7 length substring
        bool flag = 0 ;
        FOR(i,1, o.size()){
            if(o[i]-o[i-1]==3){
                if(s[o[i]-1]!=s[o[i]-2]){
                    flag = 1 ;
                }
            }
        }
        if(flag){cout<<4<<endl; return;}
        FOR(i,2,o.size()){
            if(o[i]-o[i-1]==3 && o[i-1]-o[i-2]==3){
                string temp;
                FOR(j,o[i-2],o[i]+1){
                    temp+=s[j] ;
                }

                if(temp=="abbacca" || temp=="accabba"){
                    cout<<7<<endl ;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl ;

}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
