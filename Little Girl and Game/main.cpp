#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<char, int> m ;
    string s ;
    cin>>s;
    int x = 0 ;
    while(s[x]!='\0'){
        m[s[x]] ++ ;
        x++ ;
    }
    int nodd = 0 ;
    for(auto i: m){
        if(i.second%2!=0) nodd++ ;
    }

    if(nodd==0) cout<<"First" ;
    else if(nodd%2!=0) cout<<"First" ;
    else cout<<"Second" ;

    return 0;
}
