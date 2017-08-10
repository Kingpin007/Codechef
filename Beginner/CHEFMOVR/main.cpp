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
        stack<ll> b[d],c[d];
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
            b[i%d].push(abs(a[i]-val));
            c[i%d].push(a[i]);
        }
        for(int i=0;i<d;i++){
            while(!c[i].empty()){
                ll t1 = c[i].top();
                c[i].pop();
                if(c[i].empty()){
                    if(t1!=val)
                        canMakeEqual = false;
                    break;
                }
                ll t2 = c[i].top(); c[i].pop();
                ll t3 = t1-val;
                total += abs(t3);
                t2 = t2+t3;
                c[i].push(t2);
            }
        }
        if(canMakeEqual)
            cout<<total<<endl;
        else
            cout<<"-1\n";
    }
    return 0;
}
