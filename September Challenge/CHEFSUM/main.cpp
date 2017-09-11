#include <bits/stdc++.h>

using namespace std;

#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }

template <typename T> inline void write(T x)
{
	int i = 20;
	char buf[21];
	// buf[10] = 0;
	buf[20] = '\n';

	do
	{
		buf[--i] = x % 10 + '0';
		x/= 10;
	}while(x);
	do
	{
		putchar(buf[i]);
	} while (buf[i++] != '\n');
}

template <typename T> inline T readInt()
{
	T n=0,s=1;
	char p=getchar();
	if(p=='-')
		s=-1;
	while((p<'0'||p>'9')&&p!=EOF&&p!='-')
		p=getchar();
	if(p=='-')
		s=-1,p=getchar();
	while(p>='0'&&p<='9') {
		n = (n<< 3) + (n<< 1) + (p - '0');
		p=getchar();
	}

	return n*s;
}

int main()
{
	int tc;
	tc = read(int);

	while(tc--){
		vector<pair<int,int> > v1;
		int s1,s2 = 1,n;
		n = read(int);
		for(int i=0;i<n;i++){
			s1 = read(int);
			v1.push_back(make_pair(s1, s2++));
		}
		sort(v1.begin(),v1.end());
		cout<<v1[0].second<<endl;
	}
	return 0;
}
