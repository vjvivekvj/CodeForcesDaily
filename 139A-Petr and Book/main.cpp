#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int day[7] ;
    for(int i=0; i<7; i++){
        cin>>day[i];
    }
    int sum = 0, i=0;
    while(1){
        sum+=day[i] ;
        if(sum>=n) break ;
        i = (i+1)%7 ;
    }
    i = i+1;
    cout<<i ;
    return 0;
}
