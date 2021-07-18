#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int main()
{
    int n ;
    cin>>n ;
    int a[n] ;
    FOR(i,0,n){
        cin>>a[i] ;
    }

    sort(a,a+n) ;
    int diff[n-1] ;
    FOR(i,0,n){
        diff[i] = a[i+1] - a[i] ;
    }
    int d = findGCD(diff, n-1) ;
    cout<<(a[n-1] - a[0] + d)/d - n ;
    return 0;
}
