#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m ;
    int task, houseNo = 1;
    long long int time=0 ;
    for(int i=0; i<m; i++){
        cin>>task ;
        if(task<houseNo){
            time += (n-houseNo) + task ;
        }
        else{
            time+= task - houseNo ;
        }
        houseNo = task ;
    }
    cout<<time ;
    return 0;
}
