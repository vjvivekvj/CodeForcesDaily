#include <iostream>
#include <vector>
using namespace std;

/* Logic
We need to find either 1 2 or 3 length substring which is divisible by 8
We follow a recursive approach here
The choice we make is we either include a digit in the substring or we don't.
Now, what should be our base case - when will the recursion terminate
We have two arrays - finalState(divisible by 8 numbers)
interState - numbers which are a suffix of nos in final state
We stop either when we see that the number is a final state
or the number is not even an intermediate state, so no use in checking it further.

Generate number is just a utility function to generate a number for a string

*/

vector<bool> finalState(1001, 0), interState(1001,0) ;

int generateNum(int num, char c){
    char ctod[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'} ;
    int digit;
    for(int i=0; i<10; i++){
        if(c==ctod[i]){
            digit = i ;
            break ;
        }
    }
    if(num==0){
        return digit;
    }
    else if(num<10){
        return digit*10 + num ;
    }
    else{
        return digit*100 + num ;
    }
}

int ans ;
bool recfun(string s, int num, int n){
        if(n<0) return 0;
        int newNum = generateNum(num, s[n]);

        if(finalState[newNum]){
           ans = newNum ;
           return 1 ;
        }
        bool res=0;
        if(interState[newNum]) res = recfun(s, newNum, n-1) ;
        if(interState[num]) res = res || recfun(s, num, n-1) ;
        return res;
}

int main()
{
    string s ;
    cin>>s ;

    for(int i=0; i<=1001; i+=8){
        finalState[i] = 1 ;
        interState[i%10] = 1 ;
        interState[i%100] = 1 ;
    }

    if(recfun(s, 0, s.size()-1)){
        cout<<"YES"<<endl ;
        cout<<ans<<endl ;
    }
    else{
        cout<<"NO"<<endl ;
    }

    return 0;
}
