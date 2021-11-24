#include <bits/stdc++.h> 
//bits bloat time to switch

#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define sall(x) x.rbegin(), x.rend() 
#define st(x) sort(all(x)) 
#define rz resize
#define in insert 
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
#define f first
#define s second
#define mp make_pair
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i,0,a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i,0,a)
#define rep(a) F0R(_,a)
#define each(a, x) for (auto& a: x)

#define lb lower_bound
#define ub upper_bound
tcT> int lwb(V<T>& a, const T& b) { return int(lb(all(a),b)-bg(a)); }
tcT> int upb(V<T>& a, const T& b) { return int(ub(all(a),b)-bg(a)); }

using namespace std;
using ll = long long;
using pi = pair<int,int>;
using str = std::string;

using vi = V<int>;
using vb = V<bool>;
using vl = V<ll>;
using vd = V<db>;
using vs = V<str>;
using vpi = V<pi>;
using vpl = V<pl>;
using vpd = V<pd>;

// bruh constants
const int MOD = 1e9+7; 
const int MX = 2e5+5;
const ll BIG = 1e18; 
const set_IE = 1e+9;
const deq_IE = 1e8;
const db PI = acos((db)-1);

constexpr int p2(int x) { return 1<<x; }
constexpr int msk2(int x) { return p2(x)-1; }

tcTU> T lstTrue(T lo, T ti, U f) {
	--lo; assert(lo <= ti); 
	while (lo < ti) {
		T mid = lo+(ti - lo + 1) / 2;
		f(mid) ? lo = mid : ti = mid-  1;
	} 
	return lo;
}

tcT> bool ckmin(T& a, const T& b) {
	return b < a ? a = b, 1 : 0; } // set a = min(a,b)
tcT> bool ckmax(T& a, const T& b) {
	return a < b ? a = b, 1 : 0; }

void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0);
	if (sz(name)) {
		freopen((name + ".in").c_str(), "r", stdin); 
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

int n; // testcases if any (else delete this)
int main(void) {
	setIO();
}
