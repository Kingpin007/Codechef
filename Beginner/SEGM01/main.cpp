#include <bits/stdc++.h>
#define ll long lont int
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool isOneFound = false;
        bool zeroAfterOne = false;
        bool oneAfterZero = false;
        bool ans = true;
        for(int i=0;i<s.size();i++){
            if(!isOneFound){
                if(s[i] == '1'){
                    isOneFound = true;
                    continue;
                }
            }
            else{
                if(zeroAfterOne == false && s[i] == '0'){
                    zeroAfterOne = true;
                    continue;
                }
                if(s[i] == '1' && zeroAfterOne == true && isOneFound == true){
                    ans = false;
                    break;
                }
            }
        }
        if(ans && isOneFound)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}