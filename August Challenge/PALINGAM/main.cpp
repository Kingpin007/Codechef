#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll minSalary[1000],offeredSalary[1000],maxJobOffers[1000],company[1000];;
string qual[1000];

int main()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b;
        bool aWins = false;
        cin>>a;
        cin>>b;
        int countA[26]={0};
        int countB[26]={0};
        for(int i=0;i<a.length();i++){
            countA[a[i]-'a']++;
            countB[b[i]-'a']++;
        }
        bool AhasUniqueChar = false;
        bool BhasUniqueChar = false;
        for(int i=0;i<26;i++){
            if(countA[i] > 0 && countB[i] == 0)
                AhasUniqueChar = true;
            if(countB[i] > 0 && countA[i] == 0)
                BhasUniqueChar = true;
        }
        for(int i=0;i<26;i++){
            if(countA[i] >= 2 && countB[i] == 0)
                aWins = true;
            if(countA[i] > 0 && AhasUniqueChar==true && BhasUniqueChar==false)
                aWins = true;
        }
        if(aWins){
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }
    return 0;
}
