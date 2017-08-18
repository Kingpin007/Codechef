#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

ll f(ll a){
    a = a%MOD;
    if(a<0)
        a+=MOD;
    return a;
}

int main()
{
    ll t;
    cin>>t;
    ll a[3],n,x;
    while(t--){
        cin>>a[0]>>a[1]>>n;
        x=(n-1)/3;
        a[2] = a[1]-a[0];
        if(x%2==0){
            cout<<f(a[(n-1)%3])<<endl;
        }
        else{
            cout<<f(-a[(n-1)%3])<<endl;
        }
    }
    return 0;
}
