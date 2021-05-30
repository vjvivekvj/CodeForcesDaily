#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n ;
    string s = to_string(n);
    char past[2] = {'0','0'};
    int i=0, flag=0;
    while(s[i]!='\0'){
        if(s[i]=='1'){
            past[1] = past[0] ;
            past[1] = '1' ;
        }
        else if(s[i]=='4'){
            if(past[1]=='1' || (past[0]=='1' && past[1]=='4')){
                past[0] = past[1] ;
                past[1] = '4' ;
            }
            else{
                flag = 1 ;
                break ;
            }
        }
        else{
            flag = 1;
            break ;
        }
        i++ ;
    }
    if(flag) cout<<"NO" ;
    else cout<<"YES" ;

    return 0;
}
