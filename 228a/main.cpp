#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int s[4] ;
    for(int i=0; i<4; i++){
        int x ;
        cin>>x ;
        s[i] = x ;
    }
    sort(s, s+4) ;
    int unq = 1 ;   //unique nos.
    for(int i=1; i<4; i++){
        //find total unique nos.
        if(s[i]!=s[i-1])
            unq++ ;
    }
    cout<<(4 - unq) ;
    return 0;
}
