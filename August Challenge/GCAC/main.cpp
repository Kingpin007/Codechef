#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll minSalary[1000],offeredSalary[1000],maxJobOffers[1000],company[1000];;
string qual[1000];

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>minSalary[i];
        }
        for(int i=0;i<m;i++){
            cin>>offeredSalary[i]>>maxJobOffers[i];
            company[i] = 0;
        }
        for(int i=0;i<n;i++)
            cin>>qual[i];
        ll maxSalaryTillNow=INT_MIN,companyNumber=-1,totalSalary = 0,totalCandidates = 0,noHireCompanies = 0;
        for(int i=0;i<n;i++){
            maxSalaryTillNow = INT_MIN;
            companyNumber = -1;
            for(int j=0;j<m;j++){
                if(qual[i][j] == '1'){
                    if(offeredSalary[j] > maxSalaryTillNow && maxJobOffers[j] > 0){
                        maxSalaryTillNow = offeredSalary[j];
                        companyNumber = j;
                    }
                }
            }
            if(companyNumber!= -1 && minSalary[i] <= maxSalaryTillNow){
                totalSalary += maxSalaryTillNow;
                company[companyNumber]++;
                totalCandidates++;
                maxJobOffers[companyNumber]--;
            }
        }
        for(int i=0;i<m;i++)
            if(company[i] == 0)
                noHireCompanies++;
        cout<<totalCandidates<<" "<<totalSalary<<" "<<noHireCompanies<<endl;
    }
    return 0;
}
