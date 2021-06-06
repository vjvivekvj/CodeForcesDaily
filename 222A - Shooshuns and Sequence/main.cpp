#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> seq ;
    int n, k ;
    cin>>n>>k ;
    int check, flag = 0 ;
    for(int i=0; i<n; i++){
        int x ;
        cin>>x ;
        if(i==k-1){
            check = x ;
        }
        else if(i>k-1){
            if(x!=check){
                flag = 1 ;
                break ;
            }
        }
        else{
            seq.push_back(x) ;
        }
    }
    if(flag){
        cout<<-1 ;
    }
    else{
        //no of steps is the position of last distinct number
        int i = k-2 ;
        while(i>=0 && seq[i]==check){
            i-- ;
        }
        cout<<i+1 ;
    }
    return 0;
}
