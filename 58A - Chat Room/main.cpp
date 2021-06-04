#include <iostream>

using namespace std;

int main()
{
    string s ;
    cin>>s ;
    string hello = "hello" ;
    int i=0, j=0, flag=0 ;
    while(s[j]!='\0'){
        if(s[j]==hello[i]){
            i++ ;
            if(i==5){
                flag = 1;
                break ;
            }
        }
        j++ ;
    }
    if(flag) cout<<"YES";
    else cout<<"NO" ;
    return 0;
}
