#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,d;
        cin>>n>>d;
        ll *a = new ll[n];
        ll *b = new ll[d];
        ll *c = new ll[d];
        for(int i=0;i<d;i++){
            b[i] = 0;
            c[i] = 0;
        }
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        bool canMakeEqual = true;
        int val = sum/n;
        if(sum%n != 0){
            canMakeEqual = false;
        }
        ll total = 0;
        for(int i=0;i<n;i++){
            b[i%d] += a[i]-val;
            c[i%d] += abs(a[i]-val);
        }
        for(int i=0;i<d;i++){
            if(b[i]!=0){
                canMakeEqual = false;
                break;
            }
        }
        for(int i=0;i<d;i++){
            total += c[i];
        }
        if(canMakeEqual)
            cout<<total/2<<endl;
        else
            cout<<"-1\n";
    }
    return 0;
}
