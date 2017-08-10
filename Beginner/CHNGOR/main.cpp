#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll *a = new ll[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll ans=a[0];
        for(int i=0;i<n;i++){
            ans = ans|a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
