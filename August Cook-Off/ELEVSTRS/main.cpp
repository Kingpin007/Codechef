#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,v1,v2;
        cin>>n>>v1>>v2;
        double elevatorTime = ((double)(2*n))/v2;
        double chefTime = ((double)(1.414213562*n))/v1;
        if(elevatorTime<chefTime)
            cout<<"Elevator"<<endl;
        else
            cout<<"Stairs"<<endl;
    }
    return 0;
}
