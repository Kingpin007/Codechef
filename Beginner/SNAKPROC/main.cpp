#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--) {
	    int a,b,v;
	    a=b=v=0;
	   	int n;
	   	cin>>n;
	   	string s;
	   	cin>>s;
	   	for(int i=0;i<n;i++){
	   		if(s[i] == 'H')
	   			a++;
	   		else if(s[i] == 'T')
	   			b++;
	   		if(abs(a-b) > 1 || b > a){
	   			v = 1;
	   			break;
	   		}
	   	}
	   	if(v == 1 || a != b)
	   		cout<<"Invalid\n";
	   	else
	   		cout<<"Valid\n";
	}
	return 0;
}