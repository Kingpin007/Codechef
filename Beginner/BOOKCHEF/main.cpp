#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    vector<ll> av;
    vector<pair<ll,pair<ll,string> > > v;
    ll n,m;
    cin>>n>>m;
    ll a,f,p;
    string s;
    for(int i=0;i<n;i++){
        cin>>a;
        av.push_back(a);
    }
    sort(av.begin(),av.end());
    for(int i=0;i<m;i++){
        cin>>f>>p>>s;
        v.push_back(make_pair(p,make_pair(f,s)));
    }
    sort(v.rbegin(),v.rend());
    vector<string> out1,out2;
    for(int i=0;i<v.size();i++){
        if(binary_search(av.begin(),av.end(),v[i].second.first))
            out1.push_back(v[i].second.second);
        else
            out2.push_back(v[i].second.second);
    }
    for(int i=0;i<out1.size();i++){
        cout<<out1[i]<<endl;
    }
    for(int i=0;i<out2.size();i++){
        cout<<out2[i]<<endl;
    }
    return 0;
}
