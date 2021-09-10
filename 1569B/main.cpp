#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n ;
    cin>>n ;
    string s ;
    cin>>s ;

    vector<int> winner ;
    int cnt2 = 0 ;
    FOR(i,0,n){
        if(s[i] == '2'){
            winner.push_back(i) ;
            cnt2 ++ ;
        }
    }

    if(cnt2==1 || cnt2==2){
        cout<<"NO"<<endl ;
        return ;
    }

    cout<<"YES"<<endl ;
    char ans[n][n] ;
    FOR(i,0,n){
        FOR(j,0,n){
            ans[i][j]='=' ;
        }
    }

    FOR(i,0,n){ans[i][i] = 'X';}
    FOR(i,0,cnt2){
        int x = winner[i], y = winner[(i+1)%cnt2] ;
        ans[x][y] = '+' ;
        ans[y][x] = '-' ;
    }

    FOR(i,0,n){
        FOR(j,0,n){
            cout<<ans[i][j] ;
        }
        cout<<endl;
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
