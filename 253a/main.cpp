#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream of ;
    of.open("output.txt") ;
    int n, m, total;
    cin>>n>>m ;
    total = n+m ;
    string res ;
    while(total>0){
        if(n>m){
            res+= 'B' ;
            n-- ;
        }
        else if (m>n){
            res+= 'G' ;
            m-- ;
        }
        else{
            if(res.size()>0){
                if(res[res.size()-1]=='B'){
                    m-- ;
                    res += 'G' ;
                }
                else{
                    res += 'B' ;
                    n-- ;
                }
            }
            else{
                res += 'B' ;
                n-- ;
            }
        }
        total-- ;
    }
    cout<<res;
    of<<res ;
    of.close() ;
    return 0;
}
