#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        char pop[100];
        cin>>pop;
        int arr[100];
        int snakes1=0,snakes2=0,mongoose1=0,mongoose2=0;
        for(int i=0;pop[i]!='\0';i++){
            if(pop[i] == 's'){
                arr[i] = 0;
                snakes1++;
            }
            else if(pop[i] == 'm'){
                arr[i] = 1;
                mongoose1++;
            }
        }
        for(int i=0;pop[i]!='\0';i++){
            if(pop[i] == 's'){
                if(pop[i+1] == 'm' && arr[i+1] == 1){
                    pop[i] = 'x';
                    arr[i+1] = 0;
                }
                else if(pop[i-1] == 'm' && arr[i-1] == 1){
                    pop[i] = 'x';
                    arr[i-1] = 0;
                }
            }
        }
        for(int i=0;pop[i]!='\0';i++){
            if(pop[i] == 's'){
                arr[i] = 0;
                snakes2++;
            }
            else if(pop[i] == 'm'){
                arr[i] = 1;
                mongoose2++;
            }
        }
        if(snakes2>mongoose2){
            cout<<"snakes\n";
        }
        else if(snakes2==mongoose2){
            cout<<"tie\n";
        }
        else{
            cout<<"mongooses\n";
        }
    }
    return 0;
}
