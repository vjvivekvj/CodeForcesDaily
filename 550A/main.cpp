#include <iostream>

using namespace std;

/*Logic

Find first occurrence of ab, then see if ba is there starting from right of ba
or
find first occurrence of ba, then see if ab is there starting from right of ab
*/

int findOccurence(string s,  string toFind, int i){
    bool found = 0 ;
    int n = s.size(), ans=0 ;
    while(i<n-1){
        if(s[i]==toFind[0] && s[i+1]==toFind[1]){
            ans = i+1 ;
            break ;
        }
        i++ ;
    }
    return ans;
}

bool check(string s, string toFind, string toCheck){
    int searchAfter = findOccurence(s, toFind, 0) ;
    //cout<<searchAfter<<endl ;
    if(searchAfter){
        int afterIndex = findOccurence(s, toCheck, searchAfter+1) ;
        //cout<<afterIndex<<endl ;
        if(afterIndex) return 1;
        else return 0 ;
    }
    return 0 ;
}

int main()
{
    string s;
    cin>>s ;
    int n = s.size() ;

    bool abba = 0, baab = 0 ;
    abba = check(s,"AB", "BA") ;
    baab = check(s, "BA", "AB") ;
    if(abba || baab){
        cout<<"YES";
    }
    else{
        cout<<"NO" ;
    }
    cout<<endl ;
    return 0;
}
