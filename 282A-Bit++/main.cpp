#include <iostream>

using namespace std;

int main()
{
    int n, result = 0 ;
    cin>>n ;
    while(n--){
        string s ;
        cin>>s;
        if(s[1] == '+') result++ ;
        else result-- ;
    }
    cout<<result;
    return 0;
}
