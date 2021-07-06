#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


int main()
{
    int n;
    cin>>n;
    unordered_map<string, int> database;

    FOR(i,0,n){
        string name;
        cin>>name ;
        if(!database[name]){
            cout<<"OK"<<endl ;
            database[name] = 1;
        }
        else{
            cout<<name<<database[name]<<endl ;
            database[name]++ ;
        }
    }

    return 0;
}
