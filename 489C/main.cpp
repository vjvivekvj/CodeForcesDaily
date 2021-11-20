#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;


int toDig(char c){
    int i = 0;
    char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'} ;
    while(nums[i]!=c){
        i++ ;
    }
    return i ;
}
int main()
{
    int m, sum;
    cin>>m>>sum ;

    string highest, lowest ;
    char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'} ;
    vector<string> ans(2);

    // Highest Number
    while(sum!=0){
        if(sum>=9){
            highest += '9' ;
            sum -= 9;
        }
        else{
            highest += nums[sum] ;
            sum = 0;
        }
    }

    if(highest.size()>m || (highest.size()==0 && m>1)){
        cout<<"-1 -1" ;
        return 0;
    }
    else{
        while(highest.size()!=m){
            highest += '0' ;
        }
        ans[1] = highest ;
    }

    // Lowest Number
    lowest = highest ;
    sort(lowest.begin(), lowest.end()) ;
    int i=0;
    while(lowest[i]=='0' && i<m){
        i++ ;
    }
    if(i<m){
        lowest[i] = nums[toDig(lowest[i])-1] ;
        lowest[0] = nums[toDig(lowest[0])+1] ;
    }
    ans[0] = lowest;
    //Printing
    for(auto n:ans){
        cout<<n<<" " ;
    }
    cout<<endl ;
    return 0;
}
