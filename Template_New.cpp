#include <bits/stdc++.h>

/*
bruh pragmas
#pragma warning(disable : 4996)
#pragma warning(disable : 4244)
#pragma warning(disable : 4305)
#pragma warning(disable : 4267)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#pragma GCC diagnostic ignored "-Wwrite-strings"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wunused-but-set-label"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma CYG_ANNOT_CALL_CONVENTION
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#pragma GCC diagnostic ignored "-Wmissing-braces"
#pragma GCC diagnostic ignored "-Wmissing-declarations"

*/
#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define xr xrc

inline namespace temp_stuff {
  inline namespace type_ {
    using ll = long long;
    using db = double;
    using ld = long double;
    using str = string;
    using pii = pair < int, int > ;
    using pll = pair < ll, ll > ;
    using vi = vector < int > ;
    using vll = vector < ll > ;
    template < class T, int SZ > using ar = array < T, SZ > ; 
    template < class T > using mset = multiset < T > ;
    template < class T, class U > using mmap = multimap < T, U > ;

    template < class T > using minpq = priority_queue < T, vector < T > , greater < T >> ;
    template < class T > using maxpq = priority_queue < T > ;

    template < class T, class cmp = less < T >> using OST = tree < T, null_type, cmp, rb_tree_tag, tree_order_statistics_node_update > ;
    template < class T, class cmp = less_equal < T >> using MOST
    = tree < T, null_type, cmp, rb_tree_tag, tree_order_statistics_node_update > ;
    template < class T, class U, class cmp = less < T >> using OSM = tree < T, U, cmp, rb_tree_tag, tree_order_statistics_node_update > ;
    template < class T, class U, class cmp = less_equal < T >> using MOSM 
    = tree < T, U, cmp, rb_tree_tag, tree_order_statistics_node_update > ;

    template < class T, class chash = hash < T >> using hset = gp_hash_table < T, null_type, chash > ;
    template < class T, class U, class chash = hash < T >> using hmap = gp_hash_table < T, U, chash > ;

    template < class T > class is_iterator {
      static T makeT();
      typedef void * twoptrs[2];
      static twoptrs & test(...);
      template < class R > static typename R::iterator_category * test(R); 
      template < class R > static void * test(R * ); 
      public: static
      const bool value = sizeof(test(makeT())) == sizeof(void * );
    };
    template < class T > class is_streamable {
      template < typename SS, typename TT > static auto test(int) ->
        decltype(declval < SS & > () << declval < TT > (), true_type());
      template < typename, typename > static auto test(...) -> false_type;
      public: static
      const bool value = decltype(test < ostream,
        const T & > (0))::value;
    };
  }

  inline namespace func_ {
    #define fbo find_by_order
    #define ook order_of_key 
    #define pb push_back
    #define pf push_front
    #define eb emplace_back 
    #define ef emplace_front
    #define em emplace
    #define ins insert
    #define ft front
    #define bk back
    #define ppb pop_back
    #define ppf pop_front
    #define ers erase
    #define clr clear
    #define mp make_pair
    #define f first
    #define s second
    struct CPS {
      template < class T, class U >
        bool operator()(const pair < T, U > & a,
          const pair < T, U > & b) {
          return mp(a.s, a.f) < mp(b.s, b.f);
        }
    };
    template < class T > inline T sq(T a) {
      return a * a;
    }
    template < class T > inline T sqdist(pair < T, T > a, pair < T, T > b) {
      return sq(a.f - b.f) + sq(a.s - b.s);
    }
    template < class T > inline int sz(T x) {
      return (int) x.size();
    }
    #define rsz resize
    #define lb lower_bound 
    #define ub upper_bound 
    #define all(x) begin(x), end(x)
    #define rall(x) end(x), begin(x)
  }

  inline namespace loop_ {
    #define trav(a, ...) for (auto & (a): (__VA_ARGS__))

      #define FOR(i, a, b)\
    for (auto i = decltype(b) {
        (a) - ((a) > (b))
      }; i != (b) - ((a) > (b));
      ((a) > (b)) ? --i : ++i) // [lb,ub-1]
      #define FOR_(i, a, b, d)\
    for (auto i = decltype(b) {
        (a) - ((a) > (b))
      };
      (a > b) ? (i > b - 1) : (i < b); i += (((a) > (b)) ? -1 : 1) * abs(d)) 

      #define F0R(i, b) FOR(i, 0, b)
    #define F0R_(i, b, d) FOR_(i, 0, b, d)
    #define F1R(i, b) FOR(i, 1, b + 1) 
    #define F1R_(i, b, d) FOR_(i, 1, b + 1, d)

    #define R0F(i, n) FOR(i, n, 0)
    #define R0F_(i, b, d) FOR_(i, b, 0, d)
    #define R1F(i, b) FOR(i, b + 1, 1)
    #define R1F_(i, b, d) FOR_(i, b + 1, 1, d)
  }

  inline namespace const_ {
    const int MOD = 1e9 + 7,
      _ = 1e5 + 5,
      __ = 2 * _,
      INF = 0x3f3f3f3f;
    const ll INFLL = 0x3f3f3f3f3f3f3f3f;
    const db EPS = 1e-8;
  }

  inline namespace math_ {
    template < class T > inline bool ckmin(T & a,
      const T b) {
      return a > b ? a = b, 1 : 0;
    }
    template < class T > inline bool ckmax(T & a,
      const T b) {
      return a < b ? a = b, 1 : 0;
    }
    inline ll gcd(ll a, ll b) {
      return (a == 0 || b == 0) ? max(abs(a), abs(b)) : __gcd(a, b);
    }
    inline ll lcm(ll a, ll b) {
      return (a == 0 || b == 0) ? 0 : a * b / gcd(a, b);
    }
    const int xd[4] = {
        0,
        1,
        0,
        -1
      },
      yd[4] = {
        1,
        0,
        -1,
        0
      };
  }

  inline namespace rand_ {
    mt19937 mt(chrono::steady_clock::now().time_since_epoch().count());
    inline int RAND(int l = -INF, int r = INF) {
      uniform_int_distribution < int > unifd(l, r);
      return unifd(mt);
    }
  }

  inline namespace io_ {
    #define NL cout << "\n"
    #define NLD cerr << "\n"

    template < typename T, typename = typename enable_if < is_streamable < T > ::value > ::type >
      inline void in (T & var1) {
        cin >> var1;
      }
    template < typename T1, typename T2 > inline void in (pair < T1, T2 > & pt) {
      in (pt.f); in (pt.s);
    }
    template < typename T, typename...Types > inline void in (T & var1, Types & ...var2) {
      in (var1); in (var2...);
    }
    template < typename it, typename = typename enable_if < is_iterator < it > ::value > ::type >
      inline void in (it bg, it nd) {
        while (distance(bg, nd)) in ( * bg), ++bg;
      }

    inline void out() {
      NL;
    }
    template < typename T, typename = typename enable_if < is_streamable < T > ::value > ::type >
      inline void out_(T var1) {
        cout << var1;
      }
    template < typename T, typename = typename enable_if < is_streamable < T > ::value > ::type >
      inline void out(T var1) {
        cout << var1;
        NL;
      }
    template < typename T1, typename T2 > inline void out_(pair < T1, T2 > pt) {
      out_(pt.f);
      cout << " ";
      out_(pt.s);
    }
    template < typename T, typename...Types > inline void out(T var1, Types...var2) {
      out_(var1);
      cout << " ";
      out(var2...);
    }
    template < typename it, typename = typename enable_if < is_iterator < it > ::value > ::type >
      inline void out(it bg, it nd) {
        while (distance(bg, nd)) out_( * bg), cout << " ", ++bg;
        NL;
      }

    inline void dbg() {
      NLD;
    }
    template < typename T, typename = typename enable_if < is_streamable < T > ::value > ::type >
      inline void dbg_(T var1) {
        cerr << var1;
      }
    template < typename T, typename = typename enable_if < is_streamable < T > ::value > ::type >
      inline void dbg(T var1) {
        cerr << var1;
        NLD;
      }
    template < typename T1, typename T2 > inline void dbg_(pair < T1, T2 > pt) {
      dbg_(pt.f);
      cerr << " ";
      dbg_(pt.s);
    }
    template < typename T, typename...Types > inline void dbg(T var1, Types...var2) {
      dbg_(var1);
      cerr << " ";
      dbg(var2...);
    }
    template < typename it, typename = typename enable_if < is_iterator < it > ::value > ::type >
      inline void dbg(it bg, it nd) {
        while (distance(bg, nd)) dbg_( * bg), cerr << " ", ++bg;
        NLD;
      }
    #define what(...) cerr << "[Line " << __LINE__ << "] " << #__VA_ARGS__ << " is ";
    dbg(__VA_ARGS__);

    inline void outln() {}
    template < typename T, typename = typename enable_if < is_streamable < T > ::value > ::type >
      inline void out_ln(T var1) {
        cout << var1;
        NL;
      }
    template < typename T1, typename T2 > inline void out_ln(pair < T1, T2 > pt) {
      out_(pt.f);
      out_(pt.s);
      NL;
    }
    template < typename T, typename...Types > inline void outln(T var1, Types...var2) {
      out_ln(var1);
      outln(var2...);
    }
    template < typename it, typename = typename enable_if < is_iterator < it > ::value > ::type >
      inline void outln(it bg, it nd) {
        while (distance(bg, nd)) outln( * bg), ++bg;
      }

    #define TIME chrono::duration < ld, milli > (chrono::steady_clock::now() - CLK).count()
    #define TICK CLK = chrono::steady_clock::now()
    inline void pres(int d) {
      cout.precision(d);
      cout.setf(ios::fixed, ios::floatfield);
    }
    #define IO(PNAME) if (fopen(PNAME ".in", "r")) freopen(PNAME ".in", "r", stdin), freopen(PNAME ".out", "w", stdout);\
    cin.tie(0) -> sync_with_stdio(0);
    TICK
  }
}
auto TICK; 

struct CPS { 
	template<class T, class U> 
	bool operator() (const pair<T,U> &a, const pair<T,U> &b) const { return mp(a.s,a.f) < mp(b.s,b.f); } 
};

set<pair<int,int>, CPS>> example; 

signed main() {
  IO("");

}
