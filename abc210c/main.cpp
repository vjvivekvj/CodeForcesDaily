#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //input
    int n, k ;
    cin>>n>>k ;
    int a[n] ;
    for(int i=0; i<n; i++){
        cin>>a[i] ;
    }

    //logic
    unordered_map<int, int> m ;
    int unq=0, maxunq=0;
    for(int i=0; i<n; i++){
        if(i>=k){
            m[a[i-k]]--;
            if(m[a[i-k]]==0){
                //1 unique number lost
                unq-- ;
            }
        }
        if(m[a[i]]==0){
            //1 unique number found
            unq++;
        }
        m[a[i]]++ ;
        maxunq = max(unq, maxunq) ;
    }
    cout<<maxunq ;
    return 0;
}
