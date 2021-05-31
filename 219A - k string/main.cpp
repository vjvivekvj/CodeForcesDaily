#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int k;
    string s ;
    cin>>k ;
    cin>>s ;

    int i=0, flag=0;
    unordered_map<char,int> cnt;
    while(s[i]!='\0'){
        cnt[s[i]]++ ;
        i++ ;
    }
    for(auto c:cnt){
        if(c.second%k!=0){
                flag = 1 ;
                break;
        }
    }
    if(flag){
        cout<<"-1" ;
        return 0 ;
    }

    string unitstr ;
    for(auto c : cnt){
        int nc = c.second/k;
        while(nc){
            unitstr += c.first ;
            nc-- ;
        }
    }
    string resstr ;
    while(k){
        resstr+= unitstr;
        k-- ;
    }
    cout<<resstr ;




    return 0;
}
