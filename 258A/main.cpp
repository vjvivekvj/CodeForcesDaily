#include <iostream>

using namespace std;

int main()
{
    string s ;
    cin>>s ;
    int i = 0 ;
    while(s[i]!='\0' && s[i]!='0'){
        i++ ;
    }
    // delete the first zero
    // no zero found
    if(i==s.size()) i-- ;
    int j=0;
    while(s[j]!='\0'){
        if(j!=i){
            cout<<s[j] ;
        }
        j++ ;
    }
    return 0;
}
