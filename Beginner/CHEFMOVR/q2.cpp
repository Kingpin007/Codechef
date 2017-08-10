#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d,sum=0,sp,sum1=0,sum2=0;
        cin>>n>>d;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sp=sum/n;
        for(ll i=0;i<n;i+=d){
            sum1+=arr[i];
        }

        for(ll i=1;i<n;i+=d){
            sum2+=arr[i];
        }
        if(sum1%sp==0 && sum2%sp==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
