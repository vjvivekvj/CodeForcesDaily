#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;



void solve(int t){
    int n,k;
    cin>>n>>k ;
    unordered_map<int, int> freq ;     // to check the total occurrences >= k or less
    unordered_map<int, vector<int>> positions ;     // to keep track of which positions to paint
    vector<int> paint(n, 0);    // answer
    // Input
    FOR(i,0,n){
        int num ;
        cin>>num ;
        freq[num]++ ;
        positions[num].push_back(i) ;
    }

    // Logic
    vector<int> extras ;    // bucket to add so that k numbers can be painted together
    for(auto num : freq){
        vector<int> pos = positions[num.first] ;
        // if a number is more than total paints; paint first k of them, leave others unpainted
        if(num.second >= k){
            int i = 1 ;
            while(i<=k){
                paint[pos[i-1]] = i ;
                i++ ;
            }
        }
        else{
            extras.insert(extras.end(), pos.begin(), pos.end()) ;   // add to extras bucket; paint when size of this bucket becomes k
            if(extras.size()>=k){
               int i = 1 ;
                while(i<=k){
                    paint[extras[i-1]] = i ;
                    i++ ;
                }
                extras.erase(extras.begin(),extras.begin()+i-1) ;   //because these have been painted now
            }
        }
    }
    for(auto p : paint){
        cout<<p<<" " ;
    }
    cout<<endl ;
}


int main() {
	int t ;
	cin>>t ;
	FOR(i,1,t+1){
	    solve(i) ;
	}
	return 0;
}
