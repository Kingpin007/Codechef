#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int encodeInteger(int x, int n){
	n = n<<(1<<(1<<(1<<1)));
	x = x | n;
	return x;
}

void encodeArray(int *A, int *B, int n){
	for(int i=0;i<n;i++) {
    	    A[i] = encodeInteger(A[i], B[i]);
	}
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
