#include <iostream>

using namespace std;

int main()
{
    string s, t ;
    cin>>s ;
    cin>>t ;
    s = s+t ;
    int i = 0;
    while(s[i]!='\0'){
        i++ ;
    }
    int left = 0, right = i-1 ;
    bool flag=0 ;
    while(left<right){
        if(s[left]!=s[right]){
            flag = 1;
            break ;
        }
        left++ ;
        right-- ;
    }
    if(flag) cout<<"NO" ;
    else cout<<"YES" ;
    return 0;
}
