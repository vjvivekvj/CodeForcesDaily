#include <iostream>

using namespace std;

int main()
{
    int n ;
    double result ;
    cin >> n ;
    int a[n] ;
    int sum = 0;
    for(int i=0; i<n ; i++){
        cin>>a[i] ;
        sum+=a[i] ;
    }
    result = double(sum)/double(n) ;
    cout<<result;
    return 0;
}
