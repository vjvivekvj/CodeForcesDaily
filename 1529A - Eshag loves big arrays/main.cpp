#include <iostream>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n;
        int a[n] ;
        for(int i = 0; i<n; i++){
            cin>>a[i] ;
        }
        int minpos = 0;
        for(int i=1; i<n; i++){
            if(a[i]<a[minpos]){
                minpos = i ;
            }
        }
        int maxdel = 0;
        for(int i=0; i<n; i++){
            if(a[i]!=a[minpos]) maxdel++;
        }
        cout<<maxdel<<endl ;
    }
    return 0;
}
