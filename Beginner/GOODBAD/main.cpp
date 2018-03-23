#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll upper=0,lower=0;
        for(int i=0;i<n;i++)
        {
            if(isupper(s[i]))
                upper++;
            else
                lower++;
        }
        if(upper > k && lower > k)
            cout<<"none\n";
        else if(upper > k && lower <= k)
            cout<<"brother\n";
        else if(upper <= k && lower > k)
            cout<<"chef\n";
        else
            cout<<"both\n";
    }
    return 0;
}
