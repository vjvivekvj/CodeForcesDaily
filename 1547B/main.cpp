#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    string s ;
    cin>> s ;
    int i=0 , flag = 0;
    while(i<s.size() && s[i]!='a'){
        i++ ;
    }
    //a not found
    if(i==s.size()){
        cout<<"NO"<<endl;
        return ;
    }

    int left = i-1 ;
    int right = i+1 ;

    string alphabets = "bcdefghijklmnopqrstuvwxyz" ;
    int a = 0 ;     //iterator for alphabets

    int itr = 0;
    while(itr<s.size()-1){
        // If it is an alphabetic string then next alphabet should be either at
        // left or right of the current positions
        if(left>=0 && s[left]==alphabets[a]){
            left-- ;
            a++ ;
        }
        else if(right<s.size() && s[right] == alphabets[a]){
            right++ ;
            a++ ;
        }
        else{
            flag = 1;
            break ;
        }
        itr++ ;
    }

    if(flag) cout<<"NO"<<endl ;
    else cout<<"YES"<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
