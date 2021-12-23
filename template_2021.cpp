
#include <bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define ld long double
#define pll pair<ll,ll>
#define cld complex<ld>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vld vector<ld>
#define vvld vector<vector<ld>>
#define vpll vector<pll>
#define vcld vector<cld>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define eb emplace_back
#define PI acos(-1)
#define endl "\n"
#define fix(f,n) fixed<<setprecision(n)<<f
#define all(x) x.begin(),x.end()
#define rev(p) reverse(p.begin(),p.end());
#define mset(a,val) memset(a,val,sizeof(a));
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define popcount(x) __builtin_popcountll(x)
#define sz(x) ((ll)x.size())
#define FOR(i,a,b)  for(ll i=a;i<=b;i++)
#define FORR(i,a,b)  for(ll i=a;i>=b;i--)

const ll INF = 9e18;

const ll N = 2e5 + 5;

const ll M = 1000000007;

const ll MM = 998244353;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>

ll begtime = clock();
#define end_routine() cerr << "\n\nTime elapsed: " << (clock() - begtime)*1000/CLOCKS_PER_SEC << " ms\n\n";

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
void __print(const complex<long double> &x) {cerr << '{'; __print(x.real()); cerr << ','; __print(x.imag()); cerr << '}';}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif



template<typename T, typename F>
void chmax( T &a, F b) {
	if (b > a)a = b;
}

template<typename T, typename F>
void chmin( T &a, F b) {
	if (b < a)a = b;
}

template<typename T, typename F>
void self_add( T &a, F b) {
	a += b;
}

template<typename T, typename F>
void self_sub( T &a, F b) {
	a -= b;
}

ll powM(ll a, ll b, ll m)
{
	if (a <= 0)return 0;
	a %= m;

	ll ans = 1LL;
	while (b)
	{
		if (b & 1)ans = ans * a % m;
		//ans = mulmod(ans, a, m);
		a = a * a % m;
		//a = mulmod(a, a, m);
		b >>= 1;
	}

	return ans;
}



ll poww(ll a, ll b)
{

	ll ans = 1;
	while (b)
	{
		if (b & 1)ans = ans * a;
		a = a * a;
		b >>= 1;
	}

	return ans;

}



void OJ() {


#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

}

int main() {

	IOS;

	OJ();





	return 0;


}

