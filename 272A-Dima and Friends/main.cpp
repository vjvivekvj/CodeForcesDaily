#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n ;
    int friends[n] ;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>friends[i] ;
        sum+= friends[i] ;
    }
    int ways=0 ;
    for(int j=1; j<=5; j++){
        if((sum+j)%(n+1)!=1) ways++ ;
    }
    cout<<ways;
    return 0;
}
