#include <iostream>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
using namespace std;

string toLower(string word){
    string lower ;
    for(int i=0; word[i]!='\0'; i++){
        lower+= word[i] | ' ' ;
    }
    return lower;
}


int main()
{
    int n; cin>>n ;
    unordered_map<string, int> level;
    level["polycarp"] = 1 ;
    int maxLevel = 1;
    while(n--){
        string a,b,c ;
        cin>>a>>b>>c ;
        a = toLower(a) ; c = toLower(c) ;
        level[a] = level[c] + 1 ;
        maxLevel = max(maxLevel, level[a]) ;
    }
    cout<<maxLevel<<endl ;
    return 0;
}
