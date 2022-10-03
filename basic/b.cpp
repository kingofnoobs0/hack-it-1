#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define MOD 1000000007
#define PI 3.141592653589793238462
#define INF 1e18
#define set_bits __builtin_popcountll
#define endl "\n"
#define fora(i,n) for(int i=0;i<n;++i)
#define REVFOR(i,s) for(int i=s;i>=0;--i)
#define Fse(i,s,e) for(int i=s;i<e;i++)
#define sortrev(a) sort (a,a+n,revsort)

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0, lim - 1); // random number
	return uid(rang);
}

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

// useful function
ll gcd(ll a, ll b);
ll expo(ll a, ll b, ll mod);
void extendgcd(ll a, ll b, ll*v);
bool revsort(ll a, ll b) {return a > b ;}


// solution here
void solve()
{
	int x;
	cin>>x;
	int a=1,b=2,c=3;
	while(a+b+c<)


	
}




int32_t main() {
	fastio();
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	int tc = 1;
	cin >> tc;
	while (tc--) {
		solve();
	}

	return 0;
}









// function definitions
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
