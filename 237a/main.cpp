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
    int prevHour, prevMin, cafeCnt=1, maxCafeCnt=1;
    cin>>prevHour>>prevMin ;

    FOR(i,1,n){
        int hour, minute;
        cin>>hour>>minute ;
        if(prevHour == hour && prevMin == minute){
            cafeCnt++ ;
        }
        else{
            prevHour = hour ;
            prevMin = minute ;
            cafeCnt = 1 ;
        }
        maxCafeCnt = max(cafeCnt, maxCafeCnt) ;
    }
    cout<<maxCafeCnt<<endl ;
    return 0;
}
