#include <bits/stdc++.h>
#define ll long long int

using namespace std;



int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll minSalary[1000],offeredSalary[1000],maxJobOffers[1000],company[1000];
        string qual[1000];
        ll n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>minSalary[i];
        for(int i=0;i<m;i++){
            cin>>offeredSalary[i]>>maxJobOffers[i];
            company[i] = 1; //denotes that the company is yet to hire a candidate
        }
        for(int i=0;i<n;i++)
            cin>>qual[i];
        int noOfCandidates=0,totalSalaries=0,noHireCompanies=0;
        for(int i=0;i<n;i++){
            int maxSalaryTillNow = 0;
            int companyNumber = -1;
            for(int j=0;j<m;j++){
                if(qual[i][j] == '1'){
                    //IF candidate has qualified for the company
                    if(maxSalaryTillNow<offeredSalary[j] && maxJobOffers[j]!=0){
                        //If the maximum salary is to be changed and slot left
                        maxSalaryTillNow = offeredSalary[j];
                        companyNumber = j; //sets the best company till now
                    }
                }
            }
            if(maxSalaryTillNow>minSalary[i] && companyNumber != -1){
                totalSalaries += maxSalaryTillNow;
                noOfCandidates++;
                company[companyNumber] = 0;
                maxJobOffers[companyNumber]--;
            }
        }
        for(int i=0;i<m;i++){
            if(company[i]==1)
                noHireCompanies++;
        }
        cout<<noOfCandidates<<" "<<totalSalaries<<" "<<noHireCompanies<<endl;
    }
    return 0;
}
