#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums(8,0) ;
    int n ;
    cin>>n ;
    for(int i=0; i<n; i++){
        int num ;
        cin>>num ;
        if(num==5 || num==7){
            cout<<-1 ;
            return 0;
        }
        else{
            nums[num]++ ;
        }
    }

    if(nums[1]!=n/3 || ((nums[2]+nums[3])!= (nums[4]+nums[6])) || nums[2]<nums[4]){
        cout<<-1 ;
        return 0 ;
    }

    //print output
    while(nums[1]){
        while(nums[3]&&nums[6]){
            cout<<1<<" "<<3<<" "<<6<<endl ;
            nums[3]-- ;
            nums[6]-- ;
            nums[1]-- ;
        }
        while(nums[2] && nums[4]){
            cout<<1<<" "<<2<<" "<<4<<endl ;
            nums[4]-- ;
            nums[2]-- ;
            nums[1]-- ;
        }
        while(nums[6]){
            cout<<1<<" "<<2<<" "<<6<<endl ;
            nums[6]-- ;
            nums[2]-- ;
            nums[1]-- ;
        }
    }
    return 0;
}
