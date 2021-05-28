#include <iostream>
//#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int n ;
    cin>>n ;
    int a[n] ;
    int totalFives=0 , totalZero = 0 ;
    for(int i=0; i<n; i++){
        cin>>a[i] ;
        if(a[i]==5) totalFives++ ;
        if(a[i]==0) totalZero++ ;
    }
    if(!totalZero) cout<<"-1" ;
    else if(totalFives<9) cout<<"0" ;
    else{
        totalFives -= totalFives % 9 ;
        while(totalFives--){
            cout<<"5" ;
        }
        while(totalZero--){
            cout<<"0" ;
        }
    }

    return 0;
}
