#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



int main() {
	int t ;
	cin>>t ;
	int poly[1001] ;
	int cnt=0;

	for(int i=1; cnt<1001; i++){
        if(i%3!=0 && i%10!=3){
            poly[cnt++] = i ;
        }
	}
	//FOR(i, 0, 20){cout<<poly[i]<<endl ;}
	FOR(i,1,t+1){
        int k;
        cin>>k ;
        cout<<poly[k-1]<<endl ;
	}
	return 0;
}
