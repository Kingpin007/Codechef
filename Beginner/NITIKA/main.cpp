#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    string names[3];
    while(t--){
        int parts = 0;
        do{
            cin>>names[parts++];
        }while(getchar()!='\n');
        for(int i=0;i<parts-1;i++){
            cout<<(char)toupper(names[i][0])<<". ";
        }
        cout<<(char)toupper(names[parts-1][0]);
        for(int i=1;i<names[parts-1].size();i++){
            cout<<(char)tolower(names[parts-1][i]);
        }
        cout<<endl;
    }
    return 0;
}
