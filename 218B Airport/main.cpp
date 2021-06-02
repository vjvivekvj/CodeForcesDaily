#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int find_max(int passengers,int planes, vector<int> costs){
    int i=0, maxcost=0, p=passengers;
    int next ;
    while(p){
        if(i<planes-1 && costs[i]==costs[i+1]){
            next = i+1 ;
        }
        else next = 0;
        maxcost+= costs[i] ;
        costs[i]-- ;
        i = next ;
        p-- ;
    }
    return maxcost ;
}

int find_min(int passengers, int planes, vector<int> costs){
    int j=planes-1 , mincost = 0, p=passengers;
    while(p){
        if(costs[j]==0){
            j-- ;
        }
        mincost += costs[j] ;
        costs[j]-- ;
        p-- ;
    }
    return mincost ;
}

int main()
{
    int passengers, planes;
    cin>>passengers>>planes ;

    vector<int> costs(planes, 0) ;
    for(int i=0; i<planes; i++){
        cin>>costs[i] ;
    }

    sort(costs.begin(), costs.end(), greater<int>()) ;

    cout<<find_max(passengers, planes, costs)<<" "<<find_min(passengers, planes, costs);
    return 0;
}
