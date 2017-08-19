#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        char pop[101];
        cin>>pop;
        int s=0,m=0;
        for(int i=0;pop[i]!='\0';i++){
            if(pop[i] == 'm'){
                if(pop[i-1] == 's')
                    pop[i-1] = 'x';
                else if(pop[i+1] == 's')
                    pop[i+1] = 'x';
            }
        }
        for(int i=0;pop[i]!='\0';i++){
            if(pop[i] == 's')
                s++;
            else if(pop[i] == 'm')
                m++;
        }
        if(s>m)
            cout<<"snakes\n";
        else if(s==m)
            cout<<"tie\n";
        else
            cout<<"mongooses\n";
    }
    return 0;
}
