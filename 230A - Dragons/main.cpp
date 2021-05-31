#include <iostream>
#include <algorithm>
using namespace std;

struct Dragon{
    int strength ;
    int reward ;
};

bool compareDragons(Dragon a, Dragon b){
        return a.strength<b.strength ;
}

int main()
{
    int n,s;
    cin>>s>>n;
    struct Dragon d[n] ;
    for(int i=0; i<n; i++){
        cin>>d[i].strength>>d[i].reward ;
    }

    sort(d, d+n, compareDragons) ;
    int flag = 0;
    for(int i=0; i<n; i++){
        if(s>d[i].strength){
            s+= d[i].reward ;
        }
        else{
            flag = 1 ;
            break ;
        }
    }

    if(flag) cout<<"NO"<<endl ;
    else cout<<"YES"<<endl ;
    return 0;
}
