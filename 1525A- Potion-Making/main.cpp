#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve(){
    int potion ;
    cin>>potion ;
    int water = 100-potion ;
    int x = gcd(potion, water);
    cout<<potion/x + water/x<<endl ;
}
int main()
{
    int t;
    cin>>t ;
    while(t--){
        solve() ;
    }
    return 0;
}
