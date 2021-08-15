#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n ;
    int qx, qy, kx, ky, gx, gy;
    cin>>qx>>qy>>kx>>ky>>gx>>gy ;

    if((abs(qx - kx) + abs(qx - gx) == abs(kx - gx)) || (abs(qy-ky) + abs(qy - gy) == abs(ky - gy))){
        cout<<"NO" ;
    }
    else{
        cout<<"YES" ;
    }
    cout<<endl ;
    return 0;
}
