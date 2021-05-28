#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n ;
    cin>>n ;
    int i = 0, x=0 ;
    vector<int> fib = {0,1} ;

    while(n!=x){
        if(i==0) x = fib[0] ;
        else if(i==1) x = fib[1] ;
        else{
            x = fib[i-1] + fib[i-2] ;
            fib.push_back(x) ;
        }
        if(n==x) break ;
        else i++ ;
    }
    if(i==0) cout<<"0 0 0" ;
    else if(i==1 || i==2) cout<<"0 0 1" ;
    else cout<<fib[i-2]<<" "<<fib[i-2]<<" "<<fib[i-3] ;
    return 0;
}
