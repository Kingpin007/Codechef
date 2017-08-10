#include <bits/stdc++.h>
#define ll int

using namespace std;

int countk(int *a,int n,int k){
    int c = 0;
    int i = 0;
    while(a[i] != k && i<n)
        i++;
    for(;i<n;i++){
        if(a[i] == k)
            c++;
        else
            break;
    }
    return c;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[100];
        bool isRainbow = true;
        bool isFirstHalf = true;
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll c[8] = {0,-1,-1,-1,-1,-1,-1,-1};
        for(int i=0;i<n;i++){
            if(c[a[i]] == -1){
                c[a[i]] = 0;
            }
            while(a[i] == 7 && i < n){
                isFirstHalf = false;
                i++;
            }
            if(isFirstHalf && a[i] != 7){
                c[a[i]]++;
            }
            else if(!isFirstHalf && a[i] != 7){
                c[a[i]]--;
            }
        }
        for(int i=0;i<8;i++){
            if(c[i]!=0){
                isRainbow = false;
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i] != a[i+1] && a[i] != a[i+1] - 1 && i < n/2){
                isRainbow = false;
                break;
            }
            if(a[i] != a[i+1] && a[i] != a[i+1] + 1 && i > n/2){
                isRainbow = false;
                break;
            }
        }
        if(isRainbow)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
