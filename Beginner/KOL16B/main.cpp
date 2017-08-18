#include <bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{
    ll t;
    ll x = 0;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int *a = new int[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int *b = new int[n];
        int *c = new int[n];
        for(int i=0;i<n;i++){
            int temp = a[i];
            int t1 = a[i]>>16;
            int t2 = a[i]&0x0000FFFF;
            b[i] = t1;
            c[i] = t2;
        }
        cout<<"Case "<<++x<<":"<<endl;
        for(int i=0;i<n;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
