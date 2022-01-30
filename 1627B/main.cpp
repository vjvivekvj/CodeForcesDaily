#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

/*Logic
The best choice for rahul is to sit at center
The best choice for tina is to paint the centers and then sit at farthest corner from rahul
The far rahul is from center, greater the distance between the two
so calculate distance of each cell from center
then add that distance to how far the center is from a corner because tina will choose the farthet corner to sit
sort all the distances then print them.
*/

int dis_from_center(int x, int y, vector<pair<int,int>> centers){
        int min_dis = INT_MAX ;
        for(auto c:centers){
            min_dis = min(min_dis, abs(x-c.first)+abs(y-c.second)) ;
        }
        return min_dis ;
}

void solve(int t){
    int n,m; cin>>n>>m;
    vector<int> distances; // store minimum distance of each cell from center
    vector<pair<int, int>> centers; //center coordinates

    // find centers
    vector<int> n_centers, m_centers ;
    if(n%2==0)
        n_centers.push_back(n/2) ;
    n_centers.push_back(n/2+1) ;

    if(m%2==0)
        m_centers.push_back(m/2) ;
    m_centers.push_back(m/2+1) ;
    for(auto nc: n_centers){
        for(auto mc: m_centers){
            centers.push_back({nc, mc}) ;
        }
    }

    // for each cell find its minimum distance from center
    FOR(i,1,n+1){
        FOR(j, 1, m+1){
            distances.push_back(dis_from_center(i,j,centers)) ;
        }
    }

    // update distances as distance to the farthest corner
        // find distance from a center point to the farthest corner -> n/2 + m/2
        for(int i=0; i<distances.size(); i++){
            distances[i] += n/2 + m/2 ;
        }

    // sort distances and print
    sort(distances.begin(), distances.end());
    for(auto d:distances){
        cout<<d<<" " ;
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
