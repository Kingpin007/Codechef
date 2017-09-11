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

int charToInt(char s[3]){
	int n = (s[0] - '0')*10+(s[1] - '0');
	return n;
}

int main()
{
	int tc;
	tc = read(int);

	while(tc--){
		string s;
		vector<char> ans;
		set<char> setAns;
		cin>>s;
		int s1[10] = {};
		char s2[21];
		int x = 0;
		for(int i=0;i<s.size();i++){
			s1[s[i]-'0']++;
		}
		for(int i=0;i<10;i++){
			if(s1[i] >= 2){
				s2[x++] = (char)i + '0';
				s2[x++] = (char)i + '0';
			}
			else if(s1[i] == 1){
				s2[x++] = (char)i + '0';
			}
		}
		s2[x] = '\0';
		for(int i=0;i<x-1;i++){
			for(int j=i+1;j<x;j++){
				char n1[3],n2[3];
				n1[0] = n2[1] = s2[i];
				n1[1] = n2[0] = s2[j];
				n1[2] = n2[2] = '\0';
				int na = charToInt(n1);
				int nb = charToInt(n2);
				if(na>= 65 && na<=90 && setAns.count((char)na) == 0){
					ans.push_back((char)na);
					setAns.insert((char)na);
				}
				if(nb>=65 && nb<=90 && setAns.count((char)nb) == 0){
					ans.push_back((char)nb);
					setAns.insert((char)nb);
				}
			}
		}
		sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i++){
			cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}
