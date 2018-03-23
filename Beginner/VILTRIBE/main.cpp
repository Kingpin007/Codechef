#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int aCount=0,bCount=0,aIndex=0,bIndex=0;
        bool aLeft=false,bLeft=false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            {
                if(bLeft == true)
                    bLeft = false;
                if(aLeft == false)
                {
                    aLeft = true;
                    aIndex = i;
                }
                else
                {
                    aCount += i-aIndex-1;
                    aIndex = i;
                }
                aCount++;
            }
            else if(s[i] == 'B')
            {
                if(aLeft == true)
                    aLeft = false;
                if(bLeft == false)
                {
                    bLeft = true;
                    bIndex = i;
                }
                else
                {
                    bCount += i-bIndex-1;
                    bIndex = i;
                }
                bCount++;
            }
        }
        cout<<aCount<<" "<<bCount<<endl;
    }
    return 0;
}
