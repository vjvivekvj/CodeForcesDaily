#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n;
    cin>>n ;
    int a[n], b[n] ;
    FOR(i,0,n){
        cin>>a[i];
    }
    FOR(i,0,n){
        cin>>b[i] ;
    }

    int dec[n], inc[n] ;
    int ndec=0, ninc=0 ;
    FOR(i,0,n){
        if(a[i]==b[i]){
            dec[i] = 0 ;
            inc[i] = 0 ;
        }
        else if(a[i]<b[i]){
            inc[i] = b[i] - a[i] ;
            ninc += inc[i] ;
            dec[i] = 0 ;
        }
        else if(a[i]>b[i]){
            dec[i] = a[i] - b[i] ;
            ndec += dec[i] ;
            inc[i] = 0 ;
        }
    }
    if(ndec!=ninc){
        cout<<-1<<endl;
        return ;
    }
    else{
        int m = ninc ;
        cout<<m<<endl ;
        int i=0, k=0, l=0 ;

        while(i<m){
            if(dec[k]==0){
                k++ ;
                continue ;
            }
            if(inc[l]==0){
                l++ ;
                continue ;
            }
            cout<<k+1<<" "<<l+1<<endl ;
            dec[k]-- ;
            inc[l]-- ;
            i++ ;
        }
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
