#include <iostream>

using namespace std;

int main()
{
    int t, a, b, c, d ;
    string s ;
    cin>>t>>a>>b>>c>>d ;
    cin>>s ;

    int disx, disy ;
    char dirx, diry ;
    disx = c-a ;
    disy = d-b ;
    if(disx<0){
        dirx = 'W' ;
        disx = -1 * disx ;
    }
    else dirx = 'E' ;

    if(disy<0){
        diry = 'S' ;
        disy = -1 * disy ;
    }
    else diry = 'N' ;
   // cout<<dirx<<disx<<diry<<disy<<endl ;
    int time = 0, flag = 0 ;

    for(int i=0; i<t; i++){
       // cout<<"loop "<<i<<endl ;
        if(s[i]==dirx) disx-- ;
       // cout<<disx<<" ";
        if(s[i]==diry) disy-- ;
        //cout<<disy<<endl ;
        if(disx<=0 && disy<=0){
            flag = 1 ;
            time = i+1 ;
            break ;
        }
    }

    if(flag) cout<<time ;
    else cout<<-1 ;
    return 0;
}
