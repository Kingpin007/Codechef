#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        int s,sg,fg,d,ti;
        cin>>s>>sg>>fg>>d>>ti;
        double ts = (double)s + (double)d*180/(double)ti;
        double difs = abs((double)sg - ts);
        double diff = abs((double)fg - ts);
        if(difs < diff)
            cout<<"SEBI\n";
        else if(difs > diff)
            cout<<"FATHER\n";
        else if(difs==diff)
            cout<<"DRAW\n";
    }
    return 0;
}
