#include <iostream>

using namespace std;

/* Logic

Going from n to m is equivalent to going from m to n
So, we imagine going from m to n
To go from m to n we just reverse the operations provided
i.e instead of multiplying, divide by 2 and instead of subtracting, we add by 1.

Consider two cases n<m and n>m
i) When n<m, to go from m to n we have to go towards lesser numbers
The fastest way to go towards n is to keep dividing the number,
but if its not divisible by 2 then we just have to add 1 and divide by 2.

ii) When n>m, to go from m to n we have to go towards higher numbers
We have only one operation which is addition.

*/

int main()
{
    int n, m ;
    cin>>n>>m ;
    int steps = 0 ;

    while(m>n){
        if(m%2!=0){
            m++ ;
            steps++ ;
        }
        m/=2 ;
        steps++ ;
    }

    steps += n-m ;
    cout<<steps<<endl ;
    return 0;
}
