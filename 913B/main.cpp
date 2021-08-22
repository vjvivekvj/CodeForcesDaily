#include <iostream>
#include <vector>
#define FOR(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main()
{
    int n ;
    cin>>n ;
    int arr[n] ;
    FOR(i,1,n){cin>>arr[i];}
    vector<bool> isLeaf (n, 1) ;
    vector<int> countLeaf(n, 0) ;
    for(int i=n-1; i>0; i--){
        isLeaf[arr[i]-1] = 0;
        if(isLeaf[i]){
            countLeaf[arr[i]-1] ++ ;
        }
    }
    FOR(i,0,n){
        if(!isLeaf[i]){
            if(countLeaf[i]<3){
                cout<<"No"<<endl ;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl ;
    return 0;
}
