#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int findMinimumIndex(int *a,int s,int n){
    while(s<0)
        s++;
    int mini = s;
    for(int i=s+1;i<n;i++){
        if(a[i] < a[mini])
            mini = i;
    }
    return mini;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int *a = new int[n];
    priority_queue<pair<double,int> > pq;
    for(int i=0;i<n;i++)
        cin>>a[i];
    double *dp = new double[n];
    int *ans = new int[n];
    dp[0] = log(a[0]);
    ans[0] = a[0];
    pq.push(make_pair(-dp[0],0));
    for(int i=1;i<n;i++){
        while(i - pq.top().second > k)
            pq.pop();
        dp[i] = dp[pq.top().second]+log(a[i]);
        ans[i] = (ans[pq.top().second]*a[i])%1000000007;
        pq.push(make_pair(-dp[i],i));
    }
    cout<<ans[n-1]<<endl;
    return 0;
}
