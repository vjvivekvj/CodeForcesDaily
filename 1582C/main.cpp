#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()==1){cout<<0<<endl; return;}
    //Observation: if first and last characters are different
    //then there exists an answer only if a palindrome can be formed by deleting either
    // the occurrences of first character or last character
    // if they are same, then add characters until they are different

    unordered_set<char> delList ;

    int i=0, j=s.size()-1 ;
    while(i<j){
        delList.insert(s[i]) ;
        delList.insert(s[j]) ;
        if(s[i++]!=s[j--]) break ;
    }
    int ans = 1e9 ;
    for(auto todel:delList){
        int tempans = 0;
        bool flag = 0 ;
        int i=0; j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                if(s[i]==todel){
                    tempans++;
                    i++;
                }
                else if(s[j]==todel){
                    tempans++;
                    j-- ;
                }
                else{
                    flag=1;
                    break ;
                }
            }
            else{
                i++; j--;
            }
        }
        if(!flag) ans = min(ans,tempans) ;
    }
    if(ans==1e9) cout<<-1<<endl ;
    else cout<<ans<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
