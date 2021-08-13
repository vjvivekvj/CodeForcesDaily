#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n ;
    int lover[n+1] ;
    for(int i=1; i<n+1; i++){
        cin>>lover[i] ;
    }
    bool flag = 0 ;
    for(int i=1; i<n+1; i++){
        if(lover[lover[lover[i]]] == i)
        {
            flag = 1;
        }
    }
    if(flag) cout<<"YES"<<endl ;
    else cout<<"NO"<<endl ;
    return 0;
}
