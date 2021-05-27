#include <iostream>

using namespace std;

int main()
{
    int a[5][5] ;
    int x,y, moves=0;
    for(int i = 0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>a[i][j] ;
            if(a[i][j]==1){
                x = i;
                y = j ;
            }
        }
    }
    moves+=abs(2-x) ;
    moves+=abs(2-y);
    cout<<moves<<endl ;
    return 0;
}
