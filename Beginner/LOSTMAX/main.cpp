#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,x;
    cin>>t;
    while(t--){
        vector<ll> a;
        do{
            cin>>x;
            a.push_back(x);
        }while(getchar()!='\n');
        sort(a.begin(),a.end());
        if(a.back() == a.size()-1)
            cout<<a[a.size()-2]<<endl;
        else
            cout<<a.back()<<endl;
    }
    return 0;
}
