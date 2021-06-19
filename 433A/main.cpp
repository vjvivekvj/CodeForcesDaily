#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;





int main() {
	int n ;
	cin>>n ;
	int count_1=0, count_2=0;
	FOR(i,0,n){
		int x ;
		cin>>x;
		x/=100 ;
		if(x==1) count_1++ ;
		else count_2++ ;
	}
    int s1=0, s2=0;
    s1 += ceil(float(count_2)/float(2));
    s2 += (count_2 - s1);
    s1 *= 2 ;
    s2 *= 2 ;
    //cout<<s1<<" "<<s2<<" "<<count_1<<endl ;
    while(count_1>0 && s2!=s1){
        s2++ ;
        count_1-- ;
    }
    if(s1==s2 && count_1%2==0){
        cout<<"YES" ;
    }
    else cout<<"NO" ;

	return 0;
}
