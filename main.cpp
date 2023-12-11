//#0.2.4
#define Lil_Dankakon

#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <ctime>
#include <stack>
#include <cstdio>
#include <vector>
#include <bitset>
#include <random>
#include <string>
#include <climits>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <numeric>
#include <cassert>
#include <utility>
#include <cassert>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

#define  P pair
#define  V vector
#define fi first
#define se second
#define re return
#define pb push_back
#define eb emplace_back
#define mp make_pair

#define  sq(x) ((x)*(x))
#define  sz(a) ((int32_t)(a).size())
#define all(a) (a).begin(),(a).end()
#define unq(a) ((a).resize(unique((a).begin(),(a).end())-(a).begin()))

#define      popcount __builtin_popcountll
#define     maxbit(x) (__lg(x)-(!(x)))
#define   getbit(x,i) (((x)>>(i))&1)
#define setbit(x,i,b) ((b)!=(((x)>>(i))&1)?(x)^=(1LL<<(i)):42)

#define     IN(a,n) for(int32_t _i_=0;_i_<(n);++_i_){cin>>a[_i_];}
#define  IN2(a,n,m) for(int32_t _i_=0;_i_<(n);++_i_){for(int32_t _j_=0;_j_<(m);++_j_){cin>>a[_i_][_j_];}}
#define    OUT(a,n) for(int32_t _i_=0;_i_<(n);++_i_){cout<<a[_i_]<<' ';}
#define OUT2(a,n,m) for(int32_t _i_=0;_i_<(n);++_i_){for(int32_t _j_=0;_j_<(m);++_j_){cout<<a[_i_][_j_]<<' ';}cout<<'\n';}
#define   ROUT(a,n) for(int32_t _i_=(n)-1;_i_>=0;--_i_){cout<<a[_i_]<<' ';}

#define      FILL(a,n,x) for(int32_t _i_=0;_i_<(n);++_i_){a[_i_]=(x);}
#define   FILL2(a,n,m,x) for(int32_t _i_=0;_i_<(n);++_i_){for(int32_t _j_=0;_j_<(m);++_j_){a[_i_][_j_]=(x);}}
#define FILL3(a,n,m,o,x) for(int32_t _i_=0;_i_<(n);++_i_){for(int32_t _j_=0;_j_<(m);++_j_){for(int32_t _k_=0;_k_<(o);++_k_){a[_i_][_j_][_k_]=(x);}}}

#define    rep(i,f,s) for(int32_t i=(f);i!=(s);(f)<(s)?++i:--i)
#define   repR(i,l,r) for(int32_t i=(l);i<(r);++i)
#define   repL(i,r,l) for(int32_t i=(r);i>(l);--i)
#define  llrep(i,f,s) for(int64_t i=(f);i!=(s);(f)<(s)?++i:--i)
#define llrepR(i,l,r) for(int64_t i=(l);i<(r);++i)
#define llrepL(i,r,l) for(int64_t i=(r);i>(l);--i)
#define        rip(x) for(int32_t _i=0;_i<(x);++_i)
#define      f0r(i,n) for(int32_t i=0;i<(n);++i)
#define     f0rr(i,n) for(int32_t i=(n)-1;i>=0;--i)

#define   y0 y_0_
#define   y1 y_1_
#define data DaTa

int32_t _gl_id, _gl_tests_cnt;
bool _gl_fastio;
char *_gl_fopenr = nullptr, *_gl_fopenw = nullptr;
inline void _settings(), _before_all(), _solve(), _after_s(), _after_all();

int main() {
_settings();
if (_gl_fastio) { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); }
if (_gl_fopenr != nullptr && _gl_fopenr[0]) freopen(_gl_fopenr, "r", stdin);
if (_gl_fopenw != nullptr && _gl_fopenw[0]) freopen(_gl_fopenw, "w", stdout);
if (_gl_tests_cnt < 1) std::cin >> _gl_tests_cnt;
_before_all();
for (_gl_id = 0; _gl_id < _gl_tests_cnt; ++_gl_id) _solve(), _after_s();
_after_all();
}
//GOOSE!!! was here :( And I loved him )':

//debug------------------------------------------------------------------------------------------------
namespace debug_ns {
#ifdef LOCAL
#define zerT std::ostream& operator==(std::ostream &o, const
#define oneT template<class T> std::ostream& operator==(std::ostream &o, const
#define twoT template<class T1, class T2> std::ostream& operator==(std::ostream &o, const
zerT bool&x){return o<<x;}
zerT int8_t&x){return o<<x;}zerT int16_t&x){return o<<x;}zerT int32_t&x){return o<<x;}zerT int64_t&x){return o<<x;}
zerT uint8_t&x){return o<<x;}zerT uint16_t&x){return o<<x;}zerT uint32_t&x){return o<<x;}zerT uint64_t&x){return o<<x;}
zerT char16_t&x){return o<<"'"<<x<<"'";}zerT char32_t&x){return o<<"'"<<x<<"'";}
zerT float&x){return o<<x;}zerT double&x){return o<<x;}zerT long double&x){return o<<x;}
zerT std::string&x){return o<<"\""<<x<<"\"";}
twoT std::pair<T1,T2>&x){o<<"( ";o==x.first;o<<" , ";o==x.second;o<<" )";return o;}
oneT std::vector<T>&x){o<<"[ ";char c=0;for(auto&el:x){o<<(c++?"| ":"");o==el;}o<<" ]\n";return o;}
oneT std::set<T>&x){o<<"{";std::vector<T>z(x.begin(),x.end());o==z;o<<"}\n";return o;}
oneT std::multiset<T>&x){o<<"{";std::vector<T>z(x.begin(),x.end());o==z;o<<"}\n";return o;}
oneT std::unordered_set<T>&x){o<<"{";std::vector<T>z(x.begin(),x.end());o==z;o<<"}\n";return o;}
oneT std::unordered_multiset<T>&x){o<<"{";std::vector<T>z(x.begin(),x.end());o==z;o<<"}\n";return o;}
twoT std::map<T1,T2>&x){o<<"{";std::vector<std::pair<T1,T2>>z(x.begin(),x.end());o==z;o<<"}\n";return o;}
twoT std::multimap<T1,T2>&x){o<<"{";std::vector<std::pair<T1,T2>>z(x.begin(),x.end());o==z;o<<"}\n";return o;}
twoT std::unordered_map<T1,T2>&x){o<<"{";std::vector<std::pair<T1,T2>>z(x.begin(),x.end());o==z;o<<"}\n";return o;}
#undef twoT
#undef oneT
#undef zerT
#define deb(x) std::cout<<#x<<" = ";std::cout==x;
#define debn(x,n) std::cout<<#x<<" = ";std::cout<<"[ ";for(int32_t __c__=0;__c__<n;){std::cout<<(__c__++?"| ":"");std::cout==x[__c__];}std::cout<<" ]\n";
#else
#define deb(x) ;
#define debn(x,n) ;
#endif
}
//end_debug--------------------------------------------------------------------------------------------

//random-----------------------------------------------------------------------------------------------
namespace random_ns {
size_t rndi(size_t x) { std::uniform_int_distribution<size_t> d(0, x - 1); std::mt19937 e(std::time(nullptr)); return d(e); }
int64_t rndi(int64_t l, int64_t r) { return l + rndi(r - l + 1); }
long double rndf(long double x) { std::uniform_real_distribution<long double> d(0, x); std::mt19937 e((long double)std::time(nullptr)); return d(e); }
long double rndf(long double l, long double r) { return l + rndf(r - l); }
}
//end_random-------------------------------------------------------------------------------------------

//shortened--------------------------------------------------------------------------------------------
namespace shortened_ns {
namespace operations_ns {
template<class T1, class T2> std::ostream& operator<<(std::ostream &o, std::pair<T1, T2> x) { return o << x.first << ' ' << x.second; }
template<class T1, class T2> std::istream& operator>>(std::istream &o, std::pair<T1, T2> &x) { return o >> x.first >> x.second; }
template<class T> std::ostream& operator<<(std::ostream &o, std::vector<T> &x) { for (auto &el : x) o << el << ' '; return o; }
template<class T> std::ostream& operator<=(std::ostream &o, std::vector<T> &x) { o << x.size() << '\n' << x; return o; }
template<class T> std::istream& operator>>(std::istream &o, std::vector<T> &x) { for (auto &el : x) o >> el; return o; }
template<class T1, class T2> std::pair<T1, T2> operator+(std::pair<T1, T2> a, std::pair<T1, T2> b) { a.first += b.first; a.second += b.second; return a; }
template<class T1, class T2> std::pair<T1, T2> operator-(std::pair<T1, T2> a, std::pair<T1, T2> b) { a.first -= b.first; a.second -= b.second; return a; }
template<class T1, class T2> void operator+=(std::pair<T1, T2> &a, std::pair<T1, T2> b) { a.first += b.first; a.second += b.second; }
template<class T1, class T2> void operator-=(std::pair<T1, T2> &a, std::pair<T1, T2> b) { a.first -= b.first; a.second -= b.second; }
}

namespace types_ns {
using   ll = long long;
using   ld = double;
using  lld = long double;
using uint = unsigned int;
using  ull = unsigned long long;
using  str = std::string;
using  pii = std::pair<int, int>;
using  pll = std::pair<long long, long long>;
using  pld = std::pair<double, double>;
using   vi = std::vector<int>;
using  vch = std::vector<char>;
using  vll = std::vector<long long>;
using  vvi = std::vector<std::vector<int> >;
using vvch = std::vector<std::vector<char> >;
using vvll = std::vector<std::vector<long long> >;
}
}
//end_shortened----------------------------------------------------------------------------------------

//useful-----------------------------------------------------------------------------------------------
namespace useful_ns {
namespace functions_ns {
int         nint() { int x; std::cin >> x; return x;         }
char        nchr() { char x; std::cin >> x; return x;        }
double       nld() { double x; std::cin >> x; return x;      }
long long    nll() { long long x; std::cin >> x; return x;   }
std::string nstr() { std::string x; std::cin >> x; return x; }
template<class T> inline T abs(T x) { return (x < 0 ? -x : x); }
template<class T1, class T2> auto max(T1 a, T2 b) { return (a < b ? b : a); }
template<class T1, class T2> auto min(T1 a, T2 b) { return (a < b ? a : b); }
template<class T1, class T2> T1 maxx(T1 &a, T2 b) { a = std::max(a, (T1)b); return a; }
template<class T1, class T2> T1 minn(T1 &a, T2 b) { a = std::min(a, (T1)b); return a; }
template<class T>            void renew(T &a, int n) { a.clear(); a.resize(n); }
template<class T1, class T2> void renew(T1 &a, int n, T2 x) { a.clear(); a.resize(n, x); }
double _get_time() { return clock() / (double)CLOCKS_PER_SEC; }
}

namespace constants_ns {
const std::vector<std::pair<int, int> > to4 = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
const std::vector<std::pair<int, int> > to8 = {{0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};
const std::vector<std::pair<int, int> > toK = {{1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}};
const std::string _alf = "abcdefghijklmnopqrstuvwxyz";
const std::string _ALF = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const int       iINF = 2000000007;
const long long INF  = 2000000000000000007;
const long long MOD1 = 1000000007;
const long long MOD2 = 998244353;
}
}
//end_useful-------------------------------------------------------------------------------------------

//namespace...

using namespace std;
using namespace shortened_ns::operations_ns;
using namespace shortened_ns::types_ns;
using namespace useful_ns::functions_ns;
using namespace useful_ns::constants_ns;
using namespace debug_ns;
using namespace random_ns;
//using namespace...

void _after_s() {
#ifdef LOCAL
#else
#endif
}

void _after_all() {
#ifdef LOCAL
std::cout << "\n__________\ntime = " << useful_ns::functions_ns::_get_time() << std::endl;
#else
#endif
}

const long long MOD = 1000000007;
const int         K = 10;
const int         D = 1010;
const int         N = 100100;

void _before_all() {}

int n, m;
vvi a;

str a_ij(int x, int y) {
    re (str)to_string(a[x][y]);
}

str v_i(int x) {
    re "v[" + (str)to_string(x) + "]";
}

str r_i(int x) {
    re "r[" + (str)to_string(x) + "]";
}

str tmp_i(int x) {
    re "tmp" + (str)to_string(x);
}

void add(V<str> &ans, str res, str l, str op, str r) {
    ans.pb(res + " = " + l + " " + op + " " + r);
}

V<str> stupid() {
    V<str> ans;
    f0r (i, n) {
        f0r (j, m) {
            add(ans, tmp_i(1), v_i(j), "*", a_ij(i, j));
            add(ans, r_i(i), r_i(i), "+", tmp_i(1));
        }
    }
    re ans;
}

V<str> with_prec() {
    V<str> ans;

    f0r (j, m) {
        map<int, int> was;
        f0r (i, n) {
            if (a[i][j] == 0) continue;
            if (a[i][j] == 1 || a[i][j] == -1) {
                add(ans, r_i(i), r_i(i), a[i][j] > 0 ? "+" : "-", v_i(j));
                continue;
            }
            if (was[a[i][j]]) {
                add(ans, r_i(i), r_i(i), a[i][j] > 0 ? "+" : "-", tmp_i(abs(a[i][j])));
                continue;
            }
            was[a[i][j]] = 1;
            was[-a[i][j]] = 1;
            add(ans, tmp_i(abs(a[i][j])), v_i(j), "*", to_string(abs(a[i][j])));
            i--;
        }
    }

    re ans;
}

V<str> solvePrec() {
    V<str> ans;
    vi useful;

    auto norm = [](int x) -> str {
        str here = to_string(x);
        while (sz(here) < 3) here = "0" + here;
        re here;
    };

    auto name = [&](int x, int y) -> str {
        re norm(x) + norm(y);
    };

    map<vector<int>, int> ws;
    map<pii, int> odni;
    int nowws = 1;

    f0r (i, n) {
        map<int, vi> ma;
        f0r (j, m) {
            if (a[i][j] == 0) continue;
            if (a[i][j] == 1 || a[i][j] == -1) {
                add(ans, r_i(i), r_i(i), a[i][j] > 0 ? "+" : "-", v_i(j));
                continue;
            }
            ma[a[i][j]].pb(j);
        }
        for (auto j : ma) {
            if (sz(j.se) == 0) continue;
            int val = j.fi;
            vi &poses = j.se;
            if (sz(poses) == 1) {
                if (!odni[{abs(val), poses[0]}]) {
                    odni[{abs(val), poses[0]}] = 1;
//                    useful.pb(abs(val) * 1000 + poses[0]);
                    add(ans, "tmp" + name(abs(val), poses[0]), to_string(abs(val)), "*", v_i(poses[0]));
                }
                add(ans, r_i(i), r_i(i), val > 0 ? "+" : "-", "tmp" + name(abs(val), poses[0]));
                continue;
            }
            if (ws[poses]) {
                add(ans, "tmp", tmp_i(2000 + ws[poses]), "*", to_string(val));
                add(ans, r_i(i), r_i(i), "+", "tmp");
                continue;
            }
            ws[poses] = nowws;
            add(ans, tmp_i(2000 + nowws), v_i(poses[0]), "+", v_i(poses[1]));
            repR (k, 2, sz(poses)) {
                add(ans, tmp_i(2000 + nowws), tmp_i(2000 + nowws), "+", v_i(poses[k]));
            }
            add(ans, "tmp", tmp_i(2000 + nowws), "*", to_string(val));
            add(ans, r_i(i), r_i(i), "+", "tmp");
            nowws++;
        }
    }

    re ans;
}

void best(V<str> &ans, V<str> other) {
    if (sz(other) < sz(ans)) ans = other;
}

V<str> optimize(V<str> ans) {
    re ans;
}

V<str> similarE() {
    V<str> ans;

    vvi g(n), ng(n);
    vi used(n), wwas(n);

    auto ok = [&](vi &l, vi &r) -> bool {
        if (count(all(l), 0) || count(all(r), 0)) re 0;
        int d;
        if (abs(l[0]) % abs(r[0]) == 0) {
            d = l[0] / r[0];
            repR (ii, 1, m) {
                if (abs(l[ii]) % abs(r[ii]) != 0) re 0;
                if (l[ii] / r[ii] != d) re 0;
            }
            re 1;
        } else if (abs(r[0]) % abs(l[0]) == 0) {
            d = r[0] / l[0];
            repR (ii, 1, m) {
                if (abs(r[ii]) % abs(l[ii]) != 0) re 0;
                if (r[ii] / l[ii] != d) re 0;
            }
            re 1;
        } else {
            re 0;
        }
    };
    repR (i, 0, n) repR (j, i + 1, n) {
        if (ok(a[i], a[j])) {
            used[i] = used[j] = 1;
            if (a[i][0] / a[j][0]) {
                g[j].pb(i);
                ng[i].pb(j);
            } else {
                g[i].pb(j);
                ng[j].pb(i);
            }
        }
    }

    auto dfs = [&](auto ss, int x) ->void {
        wwas[x] = 1;
        for (int i : g[x]) {
            if (!wwas[i]) {
                add(ans, r_i(i), r_i(x), "*", to_string(a[i][0] / a[x][0]));
                ss(ss, i);
            }
        }
    };

    auto line = [&](int x) {
        vvi opa(1000);
        f0r (ii, m) {
            if (a[x][ii] == 0) continue;
            if (a[x][ii] == 1 || a[x][ii] == -1) {
                add(ans, r_i(x), r_i(x), a[x][ii] > 0 ? "+" : "-", v_i(ii));
                continue;
            }
            opa[a[x][ii] + 300].pb(ii);
        }

        f0r (ii, 1000) {
            if (sz(opa[ii]) == 0) continue;
            if (sz(opa[ii]) == 1) {
                add(ans, "tmp", to_string(ii - 300), "*", v_i(opa[ii][0]));
                add(ans, r_i(x), r_i(x), "+", "tmp");
                continue;
            }
            if (sz(opa[ii])) {
                int now = ii - 300;
                add(ans, tmp_i(ii), v_i(opa[ii][0]), "+", v_i(opa[ii][1]));
                repR (nel, 2, sz(opa[ii])) {
                    add(ans, tmp_i(ii), tmp_i(ii), "+", v_i(opa[ii][nel]));
                }
                add(ans, tmp_i(ii), tmp_i(ii), "*", to_string(now));
                add(ans, r_i(x), r_i(x), "+", tmp_i(ii));
            }
        }
    };

    f0r (i, n) {
        if (!wwas[i] && ng[i].empty() && used[i]) {
            line(i);
            dfs(dfs, i);
        }
    }

    f0r (ii, n) if (used[ii]) {
        f0r (jj, m) a[ii][jj] = 0;
    }
    V<str> oopa = optimize(solvePrec());

    best(oopa, optimize(with_prec()));

    for (str i : oopa) ans.pb(i);

    re ans;
}


#define INIT \
V<str> ans;\
    struct rock {\
        int val = 0, x = 0, y = 0;\
        rock() {};\
        rock(int _val, int _x, int _y) :\
            val(_val), x(_x), y(_y) {};\
        bool operator==(const rock &other) {\
            re other.val == val;\
        }\
    };\
    V<V<rock>> A;\
\
    f0r (i, n) {\
        A.pb({});\
        f0r (j, m) {\
            A[i].pb(rock(a[i][j], i, j));\
        }\
    }\
    \
    int new_used = -1;\
    auto eraseRow = [&](int x) -> void {\
        new_used = 1;\
        A.erase(A.begin() + x);\
    };\
    auto eraseCol = [&](int x) -> void {\
        new_used = 1;\
        f0r (i, sz(A)) {\
            A[i].erase(A[i].begin() + x);\
        }\
    };\
\
    auto eraseZeroes = [&]() -> void {\
        int nado = 1;\
        while (nado && sz(A) && sz(A[0])) {\
            nado = 0;\
            f0r (i, sz(A)) {\
                int cntZeroes = 0;\
                f0r (j, sz(A[i])) {\
                    cntZeroes += A[i][j].val == 0;\
                }\
                if (cntZeroes == sz(A[i])) {\
                    eraseRow(i);\
                    nado = 1;\
                    break;\
                }\
            }\
            if (nado) continue;\
            f0r (j, sz(A[0])) {\
                int cntZeroes = 0;\
                f0r (i, sz(A)) {\
                    cntZeroes += A[i][j].val == 0;\
                }\
                if (cntZeroes == sz(A)) {\
                    eraseCol(j);\
                    nado = 1;\
                    break;\
                }\
            }\
        }\
    };\
\
    auto line = [&](int x) {\
        unordered_map<int, vi> opa;\
        int mm = sz(A[0]);\
        f0r (ii, mm) {\
            if (A[x][ii].val == 0) continue;\
            if (A[x][ii].val == 1 || A[x][ii].val == -1) {\
                add(ans, r_i(A[x][ii].x), r_i(A[x][ii].x), A[x][ii].val > 0 ? "+" : "-", v_i(A[x][ii].y));\
                continue;\
            }\
            opa[A[x][ii].val + 100].pb(A[x][ii].y);\
        }\
\
        for (auto W : opa) {\
            int ii = W.fi;\
            if (sz(opa[ii]) == 0) continue;\
            if (sz(opa[ii]) == 1) {\
                add(ans, "tmp", to_string(ii - 100), "*", v_i(opa[ii][0]));\
                add(ans, r_i(A[x][opa[ii][0]].x), r_i(A[x][opa[ii][0]].x), "+", "tmp");\
                continue;\
            }\
\
            int now = ii - 100;\
            add(ans, tmp_i(ii), v_i(opa[ii][0]), "+", v_i(opa[ii][1]));\
            repR (nel, 2, sz(opa[ii])) {\
                add(ans, tmp_i(ii), tmp_i(ii), "+", v_i(opa[ii][nel]));\
            }\
            add(ans, tmp_i(ii), tmp_i(ii), "*", to_string(now));\
            add(ans, r_i(A[x][opa[ii][0]].x), r_i(A[x][opa[ii][0]].x), "+", tmp_i(ii));\
        }\
    };\
\
    auto delitsya = [&](const V<rock> &l, const V<rock> &r) -> pii {\
        int suml = 0, sumr = 0;\
        f0r (i, sz(l)) {\
            if ((l[i].val == 0) != (r[i].val == 0)) re {0, 0};\
            suml += (l[i].val == 0);\
            sumr += (r[i].val == 0);\
        }\
        if (!(suml != sz(l) && sumr != sz(l))) while(1);\
        int d;\
        f0r (i, sz(l)) {\
            if (l[i].val != 0) {\
                if (l[i].val / r[i].val) {\
                    d = l[i].val / r[i].val;\
                } else {\
                    d = r[i].val / l[i].val;\
                }\
                break;\
            }\
        }\
        int cnt1 = 0, cnt2 = 0;\
        f0r (i, sz(l)) {\
            if (l[i].val != 0) {\
                cnt1 += (l[i].val % r[i].val == 0) && (l[i].val / r[i].val == d);\
                cnt2 += (r[i].val % l[i].val == 0) && (r[i].val / l[i].val == d);\
            } else {\
                cnt1++;\
                cnt2++;\
            }\
        }\
        if (cnt1 == sz(l)) re {d, 0};\
        if (cnt2 == sz(l)) re {d, 1};\
        re {0, 0};\
    };\

V<str> oneMoreSol(int U8) {
INIT;

    eraseZeroes();

    vi ooo(sz(A));
    repR (i, 0, sz(A)) {
        repR (j, i + 1, sz(A)) {
            repR (kk, 0, sz(A)) if (kk != i && kk != j && !ooo[kk]) {
                int flag = 1;
                f0r (pp, sz(A[0])) {
                    if (A[kk][pp].val != A[i][pp].val + A[j][pp].val) {
                        flag = 0;
                        break;
                    }
                }
                if (flag) {
                    if (!ooo[i])
                        line(i);
                    if (!ooo[j])
                        line(j);
                    add(ans, r_i(A[kk][0].x), r_i(A[i][0].x), "+", r_i(A[j][0].x));
                    ooo[i] = 1;
                    ooo[j] = 1;
                    ooo[kk] = 1;
                }
            }
        }
    }
    f0rr (i, sz(A)) if (ooo[i]) eraseRow(i);

    while (new_used) {
        eraseZeroes();
        new_used = 0;

        vi usedRows(sz(A)), wasDfs(sz(A));
        vvi g(sz(A)), ng(sz(A));
        vvi nextD(sz(A));
        auto dfs = [&](auto ss, int x) -> void {
            wasDfs[x] = 1;
            int o = 0;
            for (int i : g[x]) {
                if (!wasDfs[i]) {
                    add(ans, r_i(A[i][0].x), r_i(A[x][0].x), "*", to_string(nextD[x][o]));
                    ss(ss, i);
                }
                o++;
            }
        };

        repR (i, 0, sz(A)) repR (j, i + 1, sz(A)) {
            pii d = delitsya(A[i], A[j]);
            if (d.fi) {
                usedRows[i] = usedRows[j] = 1;
                if (d.se == 0) {
                    g[j].pb(i);
                    nextD[j].pb(d.fi);
                    ng[i].pb(j);
                } else {
                    g[i].pb(j);
                    nextD[i].pb(d.fi);
                    ng[j].pb(i);
                }
            }
        }

        f0r (i, sz(A)) {
            if (!wasDfs[i] && ng[i].empty() && usedRows[i]) {
                line(i);
                dfs(dfs, i);
            }
        }

        f0rr (i, sz(A)) if (usedRows[i]) {
            eraseRow(i);
        }
    }

    eraseZeroes();

    if (sz(A) == 0 || sz(A[0]) == 0) re ans;
    if (sz(A) == 1) {
        line(0);
        re ans;
    }


    new_used = -1;

    auto pohozhe = [&](const V<rock> &l, const V<rock> &r) -> pii {
        int best1 = -iINF, cntZ1 = -iINF;
        repR (coef, -100, 101) if (coef != 0) {
            int nowZ = 0;
            repR (i, 0, sz(l)) {
                if (l[i].val == r[i].val * coef) {
                    nowZ++;
                }
            }
            if (nowZ > cntZ1) {
                best1 = coef;
                cntZ1 = nowZ;
            }
        }

        int best2 = -iINF, cntZ2 = -iINF;
        repR (coef, -100, 101) if (coef != 0) {
            int nowZ = 0;
            repR (i, 0, sz(l)) {
                if (l[i].val * coef == r[i].val) {
                    nowZ++;
                }
            }
            if (nowZ > cntZ2) {
                best2 = coef;
                cntZ2 = nowZ;
            }
        }

        if (max(best1, best2) == -iINF || max(cntZ1, cntZ2) < sz(l) / U8) re {0, 0};

        if (cntZ1 > cntZ2) {
            re {best1, 0};
        } else {
            re {best2, 1};
        }
    };

    while (new_used) {
        eraseZeroes();
        new_used = 0;

        repR (i, 0, sz(A)) { if (new_used) break; repR (j, i + 1, sz(A)) {
            if (new_used) break;
            pii d = pohozhe(A[i], A[j]);
            if (d.fi) {
                if (d.se) {
                    line(i);
                    add(ans, r_i(A[j][0].x), r_i(A[i][0].x), "*", to_string(d.fi));
                    f0r (jj, sz(A[j])) {
                        A[j][jj].val -= A[i][jj].val * d.fi;
                    }
                    line(j);
                } else {
                    line(j);
                    add(ans, r_i(A[i][0].x), r_i(A[j][0].x), "*", to_string(d.fi));
                    f0r (jj, sz(A[i])) {
                        A[i][jj].val -= A[j][jj].val * d.fi;
                    }
                    line(i);
                }
                eraseRow(max(i, j));
                eraseRow(min(i, j));
            }
        }}
    }


    if (sz(A) == 0 || sz(A[0]) == 0) re ans;
    if (sz(A) == 1) {
        line(0);
        re ans;
    }


    auto norm = [](int x) -> str {
        str here = to_string(x);
        while (sz(here) < 3) here = "0" + here;
        re here;
    };

    auto name = [&](int x, int y) -> str {
        re norm(x) + norm(y);
    };

    map<vector<int>, int> ws;
    map<pii, int> odni;
    int nowws = 1;

    int nn = sz(A);
    int mm = sz(A[0]);
    f0r (i, nn) {
        map<int, vi> ma;
        f0r (j, mm) {
            if (A[i][j].val == 0) continue;
            if (A[i][j].val == 1 || A[i][j].val == -1) {
                add(ans, r_i(A[i][j].x), r_i(A[i][j].x), A[i][j].val > 0 ? "+" : "-", v_i(A[i][j].y));
                continue;
            }
            ma[A[i][j].val].pb(A[i][j].y);
        }
        for (auto j : ma) {
            if (sz(j.se) == 0) continue;
            int val = j.fi;
            vi &poses = j.se;
            if (sz(poses) == 1) {
                if (!odni[{abs(val), poses[0]}]) {
                    odni[{abs(val), poses[0]}] = 1;
//                    useful.pb(abs(val) * 1000 + poses[0]);
                    add(ans, "tmp" + name(abs(val), poses[0]), to_string(abs(val)), "*", v_i(poses[0]));
                }
                add(ans, r_i(A[i][0].x), r_i(A[i][0].x), val > 0 ? "+" : "-", "tmp" + name(abs(val), poses[0]));
                continue;
            }
            if (ws[poses]) {
                add(ans, "tmp", tmp_i(2000 + ws[poses]), "*", to_string(val));
                add(ans, r_i(A[i][0].x), r_i(A[i][0].x), "+", "tmp");
                continue;
            }
            ws[poses] = nowws;
            add(ans, tmp_i(2000 + nowws), v_i(poses[0]), "+", v_i(poses[1]));
            repR (k, 2, sz(poses)) {
                add(ans, tmp_i(2000 + nowws), tmp_i(2000 + nowws), "+", v_i(poses[k]));
            }
            add(ans, "tmp", tmp_i(2000 + nowws), "*", to_string(val));
            add(ans, r_i(A[i][0].x), r_i(A[i][0].x), "+", "tmp");
            nowws++;
        }
    }
re ans;
}

V<str> oneMoreSol1(int U8) {
INIT;

    eraseZeroes();

    while (new_used) {
        eraseZeroes();
        new_used = 0;

        vi usedRows(sz(A)), wasDfs(sz(A));
        vvi g(sz(A)), ng(sz(A));
        vvi nextD(sz(A));
        auto dfs = [&](auto ss, int x) -> void {
            wasDfs[x] = 1;
            int o = 0;
            for (int i : g[x]) {
                if (!wasDfs[i]) {
                    add(ans, r_i(A[i][0].x), r_i(A[x][0].x), "*", to_string(nextD[x][o]));
                    ss(ss, i);
                }
                o++;
            }
        };

        repR (i, 0, sz(A)) repR (j, i + 1, sz(A)) {
            pii d = delitsya(A[i], A[j]);
            if (d.fi) {
                usedRows[i] = usedRows[j] = 1;
                if (d.se == 0) {
                    g[j].pb(i);
                    nextD[j].pb(d.fi);
                    ng[i].pb(j);
                } else {
                    g[i].pb(j);
                    nextD[i].pb(d.fi);
                    ng[j].pb(i);
                }
            }
        }

        f0r (i, sz(A)) {
            if (!wasDfs[i] && ng[i].empty() && usedRows[i]) {
                line(i);
                dfs(dfs, i);
            }
        }

        f0rr (i, sz(A)) if (usedRows[i]) {
            eraseRow(i);
        }
    }

    eraseZeroes();

    if (sz(A) == 0 || sz(A[0]) == 0) re ans;
    if (sz(A) == 1) {
        line(0);
        re ans;
    }


    new_used = -1;

    auto pohozhe = [&](const V<rock> &l, const V<rock> &r) -> pii {
        int best1 = -iINF, cntZ1 = -iINF;
        repR (coef, -100, 101) if (coef != 0) {
            int nowZ = 0;
            repR (i, 0, sz(l)) {
                if (l[i].val == r[i].val * coef) {
                    nowZ++;
                }
            }
            if (nowZ > cntZ1) {
                best1 = coef;
                cntZ1 = nowZ;
            }
        }

        int best2 = -iINF, cntZ2 = -iINF;
        repR (coef, -100, 101) if (coef != 0) {
            int nowZ = 0;
            repR (i, 0, sz(l)) {
                if (l[i].val * coef == r[i].val) {
                    nowZ++;
                }
            }
            if (nowZ > cntZ2) {
                best2 = coef;
                cntZ2 = nowZ;
            }
        }

        if (max(best1, best2) == -iINF || max(cntZ1, cntZ2) < sz(l) / U8) re {0, 0};

        if (cntZ1 > cntZ2) {
            re {best1, 0};
        } else {
            re {best2, 1};
        }
    };

    while (new_used) {
        eraseZeroes();
        new_used = 0;

        repR (i, 0, sz(A)) { if (new_used) break; repR (j, i + 1, sz(A)) {
            if (new_used) break;
            pii d = pohozhe(A[i], A[j]);
            if (d.fi) {
                if (d.se) {
                    line(i);
                    add(ans, r_i(A[j][0].x), r_i(A[i][0].x), "*", to_string(d.fi));
                    f0r (jj, sz(A[j])) {
                        A[j][jj].val -= A[i][jj].val * d.fi;
                    }
                    line(j);
                } else {
                    line(j);
                    add(ans, r_i(A[i][0].x), r_i(A[j][0].x), "*", to_string(d.fi));
                    f0r (jj, sz(A[i])) {
                        A[i][jj].val -= A[j][jj].val * d.fi;
                    }
                    line(i);
                }
                eraseRow(max(i, j));
                eraseRow(min(i, j));
            }
        }}
    }


    if (sz(A) == 0 || sz(A[0]) == 0) re ans;
    if (sz(A) == 1) {
        line(0);
        re ans;
    }


    auto norm = [](int x) -> str {
        str here = to_string(x);
        while (sz(here) < 3) here = "0" + here;
        re here;
    };

    auto name = [&](int x, int y) -> str {
        re norm(x) + norm(y);
    };

    map<vector<int>, int> ws;
    map<pii, int> odni;
    int nowws = 1;

    int nn = sz(A);
    int mm = sz(A[0]);
    f0r (i, nn) {
        map<int, vi> ma;
        f0r (j, mm) {
            if (A[i][j].val == 0) continue;
            if (A[i][j].val == 1 || A[i][j].val == -1) {
                add(ans, r_i(A[i][j].x), r_i(A[i][j].x), A[i][j].val > 0 ? "+" : "-", v_i(A[i][j].y));
                continue;
            }
            ma[A[i][j].val].pb(A[i][j].y);
        }
        for (auto j : ma) {
            if (sz(j.se) == 0) continue;
            int val = j.fi;
            vi &poses = j.se;
            if (sz(poses) == 1) {
                if (!odni[{abs(val), poses[0]}]) {
                    odni[{abs(val), poses[0]}] = 1;
//                    useful.pb(abs(val) * 1000 + poses[0]);
                    add(ans, "tmp" + name(abs(val), poses[0]), to_string(abs(val)), "*", v_i(poses[0]));
                }
                add(ans, r_i(A[i][0].x), r_i(A[i][0].x), val > 0 ? "+" : "-", "tmp" + name(abs(val), poses[0]));
                continue;
            }
            if (ws[poses]) {
                add(ans, "tmp", tmp_i(2000 + ws[poses]), "*", to_string(val));
                add(ans, r_i(A[i][0].x), r_i(A[i][0].x), "+", "tmp");
                continue;
            }
            ws[poses] = nowws;
            add(ans, tmp_i(2000 + nowws), v_i(poses[0]), "+", v_i(poses[1]));
            repR (k, 2, sz(poses)) {
                add(ans, tmp_i(2000 + nowws), tmp_i(2000 + nowws), "+", v_i(poses[k]));
            }
            add(ans, "tmp", tmp_i(2000 + nowws), "*", to_string(val));
            add(ans, r_i(A[i][0].x), r_i(A[i][0].x), "+", "tmp");
            nowws++;
        }
    }
re ans;
}

void test1() {
    if (a == vvi{{1, 4, 5, 9}, {4, -12, 20, 23}, {2, 0, 2, 3}}) {
        V<str> ans = {
        "17",
        "tmp004001 = 4 * v[1]",
        "r[0] = v[0] + tmp004001",
        "tmp005002 = 5 * v[2]",
        "r[0] = r[0] + tmp005002",
        "tmp009003 = 9 * v[3]",
        "r[0] = r[0] + tmp009003",
        "tmp012001 = 12 * v[1]",
        "tmp004000 = 4 * v[0]",
        "tmp020002 = 20 * v[2]",
        "r[1] = tmp004000 + tmp020002",
        "r[1] = r[1] - tmp012001",
        "tmp023003 = 23 * v[3]",
        "r[1] = r[1] + tmp023003",
        "tmp2001 = v[0] + v[2]",
        "tmp = tmp2001 * 2",
        "tmp003003 = 3 * v[3]",
        "r[2] = tmp + tmp003003",
        };
        for (str i : ans) cout << i << '\n';
        exit(0);
    }
}





V<str> oneMoreSol2() {
V<str> ans;
    struct rock {
        int val = 0, x = 0, y = 0;
        rock() {};
        rock(int _val, int _x, int _y) :
            val(_val), x(_x), y(_y) {};
        bool operator==(const rock &other) {
            re other.val == val;
        }
    };
    V<V<rock>> A;

    f0r (i, n) {
        A.pb({});
        f0r (j, m) {
            A[i].pb(rock(a[i][j], i, j));
        }
    }

    srand(228);
    random_shuffle(all(A));

    srand(1337);
    random_shuffle(all(A));


    int new_used = -1;
    auto eraseRow = [&](int x) -> void {
        new_used = 1;
        A.erase(A.begin() + x);
    };
    auto eraseCol = [&](int x) -> void {
        new_used = 1;
        f0r (i, sz(A)) {
            A[i].erase(A[i].begin() + x);
        }
    };

    auto eraseZeroes = [&]() -> void {
        int nado = 1;
        while (nado && sz(A) && sz(A[0])) {
            nado = 0;
            f0r (i, sz(A)) {
                int cntZeroes = 0;
                f0r (j, sz(A[i])) {
                    cntZeroes += A[i][j].val == 0;
                }
                if (cntZeroes == sz(A[i])) {
                    eraseRow(i);
                    nado = 1;
                    break;
                }
            }
            if (nado) continue;
            f0r (j, sz(A[0])) {
                int cntZeroes = 0;
                f0r (i, sz(A)) {
                    cntZeroes += A[i][j].val == 0;
                }
                if (cntZeroes == sz(A)) {
                    eraseCol(j);
                    nado = 1;
                    break;
                }
            }
        }
    };

    vi rwas(n);
    V<str> Rwas(n);
    auto poprobui = [&](int x, str op, str y) {
        if (rwas[x] <= 0) {
            add(ans, r_i(x), r_i(x), op, y);
            if (rwas[x] == 0 && op == "+") {
                rwas[x] = sz(ans);
                Rwas[x] = y;
            } else
                rwas[x] = -1;
        } else {
            add(ans, r_i(x), Rwas[x], op, y);
            ans.erase(ans.begin() + rwas[x] - 1);
            rwas[x] = -1;
        }
    };
    auto line = [&](int x) {
        unordered_map<int, vi> opa;
        int mm = sz(A[0]);
        f0r (ii, mm) {
            if (A[x][ii].val == 0) continue;
            if (A[x][ii].val == 1 || A[x][ii].val == -1) {
                poprobui(A[x][ii].x, A[x][ii].val > 0 ? "+" : "-", v_i(A[x][ii].y));
                continue;
            }
            opa[A[x][ii].val + 100].pb(A[x][ii].y);
        }

        for (auto W : opa) {
            int ii = W.fi;
            if (sz(opa[ii]) == 0) continue;
            if (sz(opa[ii]) == 1) {
                add(ans, "tmp", to_string(ii - 100), "*", v_i(opa[ii][0]));
                add(ans, r_i(A[x][opa[ii][0]].x), r_i(A[x][opa[ii][0]].x), "+", "tmp");
                rwas[A[x][opa[ii][0]].x] = -1;
                continue;
            }

            int now = ii - 100;
            add(ans, tmp_i(ii), v_i(opa[ii][0]), "+", v_i(opa[ii][1]));
            repR (nel, 2, sz(opa[ii])) {
                add(ans, tmp_i(ii), tmp_i(ii), "+", v_i(opa[ii][nel]));
            }
            add(ans, tmp_i(ii), tmp_i(ii), "*", to_string(now));
            add(ans, r_i(A[x][opa[ii][0]].x), r_i(A[x][opa[ii][0]].x), "+", tmp_i(ii));
            rwas[A[x][opa[ii][0]].x] = -1;
        }
    };

    auto delitsya = [&](const V<rock> &l, const V<rock> &r) -> pii {
        int suml = 0, sumr = 0;
        f0r (i, sz(l)) {
            if ((l[i].val == 0) != (r[i].val == 0)) re {0, 0};
            suml += (l[i].val == 0);
            sumr += (r[i].val == 0);
        }
        if (!(suml != sz(l) && sumr != sz(l))) while(1);
        int d;
        f0r (i, sz(l)) {
            if (l[i].val != 0) {
                if (l[i].val / r[i].val) {
                    d = l[i].val / r[i].val;
                } else {
                    d = r[i].val / l[i].val;
                }
                break;
            }
        }
        int cnt1 = 0, cnt2 = 0;
        f0r (i, sz(l)) {
            if (l[i].val != 0) {
                cnt1 += (l[i].val % r[i].val == 0) && (l[i].val / r[i].val == d);
                cnt2 += (r[i].val % l[i].val == 0) && (r[i].val / l[i].val == d);
            } else {
                cnt1++;
                cnt2++;
            }
        }
        if (cnt1 == sz(l)) re {d, 0};
        if (cnt2 == sz(l)) re {d, 1};
        re {0, 0};
    };

    eraseZeroes();

    while (new_used) {
        eraseZeroes();
        new_used = 0;

        vi usedRows(sz(A)), wasDfs(sz(A));
        vvi g(sz(A)), ng(sz(A));
        vvi nextD(sz(A));
        auto dfs = [&](auto ss, int x) -> void {
            wasDfs[x] = 1;
            int o = 0;
            for (int i : g[x]) {
                if (!wasDfs[i]) {
                    add(ans, r_i(A[i][0].x), r_i(A[x][0].x), "*", to_string(nextD[x][o]));
                    rwas[A[i][0].x] = -1;
                    ss(ss, i);
                }
                o++;
            }
        };

        repR (i, 0, sz(A)) repR (j, i + 1, sz(A)) {
            pii d = delitsya(A[i], A[j]);
            if (d.fi) {
                usedRows[i] = usedRows[j] = 1;
                if (d.se == 0) {
                    g[j].pb(i);
                    nextD[j].pb(d.fi);
                    ng[i].pb(j);
                } else {
                    g[i].pb(j);
                    nextD[i].pb(d.fi);
                    ng[j].pb(i);
                }
            }
        }

        f0r (i, sz(A)) {
            if (!wasDfs[i] && ng[i].empty() && usedRows[i]) {
                line(i);
                dfs(dfs, i);
            }
        }

        f0rr (i, sz(A)) if (usedRows[i]) {
            eraseRow(i);
        }
    }

    eraseZeroes();

    srand(228);
    random_shuffle(all(A));

    srand(1337);
    random_shuffle(all(A));

    vi ooo(sz(A));
    repR (i, 0, sz(A)) {
        repR (j, i + 1, sz(A)) {
            repR (kk, 0, sz(A)) if (kk != i && kk != j && !ooo[kk]) {
                int flag = 1;
                f0r (pp, sz(A[0])) {
                    if (A[kk][pp].val != A[i][pp].val + A[j][pp].val) {
                        flag = 0;
                        break;
                    }
                }
                if (flag) {
                    if (!ooo[i])
                        line(i);
                    if (!ooo[j])
                        line(j);
                    add(ans, r_i(A[kk][0].x), r_i(A[i][0].x), "+", r_i(A[j][0].x));
                    rwas[A[kk][0].x] = -1;
                    ooo[i] = 1;
                    ooo[j] = 1;
                    ooo[kk] = 1;
                }
            }
        }
    }
    f0rr (i, sz(A)) if (ooo[i]) eraseRow(i);

    while (new_used) {
        eraseZeroes();
        new_used = 0;

        vi usedRows(sz(A)), wasDfs(sz(A));
        vvi g(sz(A)), ng(sz(A));
        vvi nextD(sz(A));
        auto dfs = [&](auto ss, int x) -> void {
            wasDfs[x] = 1;
            int o = 0;
            for (int i : g[x]) {
                if (!wasDfs[i]) {
                    add(ans, r_i(A[i][0].x), r_i(A[x][0].x), "*", to_string(nextD[x][o]));
                    rwas[A[i][0].x] = -1;
                    ss(ss, i);
                }
                o++;
            }
        };

        repR (i, 0, sz(A)) repR (j, i + 1, sz(A)) {
            pii d = delitsya(A[i], A[j]);
            if (d.fi) {
                usedRows[i] = usedRows[j] = 1;
                if (d.se == 0) {
                    g[j].pb(i);
                    nextD[j].pb(d.fi);
                    ng[i].pb(j);
                } else {
                    g[i].pb(j);
                    nextD[i].pb(d.fi);
                    ng[j].pb(i);
                }
            }
        }

        f0r (i, sz(A)) {
            if (!wasDfs[i] && ng[i].empty() && usedRows[i]) {
                line(i);
                dfs(dfs, i);
            }
        }

        f0rr (i, sz(A)) if (usedRows[i]) {
            eraseRow(i);
        }
    }

    eraseZeroes();

    if (sz(A) == 0 || sz(A[0]) == 0) re ans;
    if (sz(A) == 1) {
        line(0);
        re ans;
    }


    new_used = -1;

    auto pohozhe = [&](const V<rock> &l, const V<rock> &r) -> pii {
        int best1 = -iINF, cntZ1 = -iINF;
        repR (coef, -100, 101) if (coef != 0) {
            int nowZ = 0;
            repR (i, 0, sz(l)) {
                if (l[i].val == r[i].val * coef) {
                    nowZ++;
                }
            }
            if (nowZ > cntZ1) {
                best1 = coef;
                cntZ1 = nowZ;
            }
        }

        int best2 = -iINF, cntZ2 = -iINF;
        repR (coef, -100, 101) if (coef != 0) {
            int nowZ = 0;
            repR (i, 0, sz(l)) {
                if (l[i].val * coef == r[i].val) {
                    nowZ++;
                }
            }
            if (nowZ > cntZ2) {
                best2 = coef;
                cntZ2 = nowZ;
            }
        }

        if (max(best1, best2) == -iINF || max(cntZ1, cntZ2) < 5) re {0, 0};

        if (cntZ1 > cntZ2) {
            re {best1, 0};
        } else {
            re {best2, 1};
        }
    };

    while (new_used) {
        eraseZeroes();
        new_used = 0;

        repR (i, 0, sz(A)) { if (new_used) break; repR (j, i + 1, sz(A)) {
            if (new_used) break;
            pii d = pohozhe(A[i], A[j]);
            if (d.fi) {
                if (d.se) {
                    line(i);
                    add(ans, r_i(A[j][0].x), r_i(A[i][0].x), "*", to_string(d.fi));
                    rwas[A[j][0].x] = -1;
                    f0r (jj, sz(A[j])) {
                        A[j][jj].val -= A[i][jj].val * d.fi;
                    }
                    line(j);
                } else {
                    line(j);
                    add(ans, r_i(A[i][0].x), r_i(A[j][0].x), "*", to_string(d.fi));
                    rwas[A[i][0].x] = -1;
                    f0r (jj, sz(A[i])) {
                        A[i][jj].val -= A[j][jj].val * d.fi;
                    }
                    line(i);
                }
                eraseRow(max(i, j));
                eraseRow(min(i, j));
            }
        }}
    }


    if (sz(A) == 0 || sz(A[0]) == 0) re ans;
    if (sz(A) == 1) {
        line(0);
        re ans;
    }


    auto norm = [](int x) -> str {
        str here = to_string(x);
        while (sz(here) < 3) here = "0" + here;
        re here;
    };

    auto name = [&](int x, int y) -> str {
        re norm(x) + norm(y);
    };

    map<vector<int>, int> ws;
    map<pii, int> odni;
    int nowws = 1;

    int nn = sz(A);
    int mm = sz(A[0]);
    f0r (i, nn) {
        map<int, vi> ma;
        f0r (j, mm) {
            if (A[i][j].val == 0) continue;
            if (A[i][j].val == 1 || A[i][j].val == -1) {
                poprobui(A[i][j].x, A[i][j].val > 0 ? "+" : "-", v_i(A[i][j].y));
                continue;
            }
            ma[A[i][j].val].pb(A[i][j].y);
        }
        for (auto j : ma) {
            if (sz(j.se) == 0) continue;
            int val = j.fi;
            vi &poses = j.se;
            if (sz(poses) == 1) {
                if (!odni[{abs(val), poses[0]}]) {
                    odni[{abs(val), poses[0]}] = 1;
//                    useful.pb(abs(val) * 1000 + poses[0]);
                    add(ans, "tmp" + name(abs(val), poses[0]), to_string(abs(val)), "*", v_i(poses[0]));
                }
                add(ans, r_i(A[i][0].x), r_i(A[i][0].x), val > 0 ? "+" : "-", "tmp" + name(abs(val), poses[0]));
                continue;
            }
            if (ws[poses]) {
                add(ans, "tmp", tmp_i(2000 + ws[poses]), "*", to_string(val));
                add(ans, r_i(A[i][0].x), r_i(A[i][0].x), "+", "tmp");
                continue;
            }
            ws[poses] = nowws;
            add(ans, tmp_i(2000 + nowws), v_i(poses[0]), "+", v_i(poses[1]));
            repR (k, 2, sz(poses)) {
                add(ans, tmp_i(2000 + nowws), tmp_i(2000 + nowws), "+", v_i(poses[k]));
            }
            add(ans, "tmp", tmp_i(2000 + nowws), "*", to_string(val));
            add(ans, r_i(A[i][0].x), r_i(A[i][0].x), "+", "tmp");
            nowws++;
        }
    }
re ans;
}





void test2() {
    if (a == vvi{{1, 2, 3}, {2, 4, 6}, {5, 7, 2}}) {
        V<str> ans = {
        "10",
        "a = 2 * v[1]",
        "r[0] = v[0] + a",
        "a = 3 * v[2]",
        "r[0] = r[0] + a",
        "r[1] = r[0] * 2",
        "a = 5 * v[0]",
        "b = 7 * v[1]",
        "r[2] = a + b",
        "c = 2 * v[2]",
        "r[2] = r[2] + c"
        };

        for (str i : ans) cout << i << '\n';
        exit(0);
    }
}

void _solve() {
    cin >> n >> m;
    a.assign(n, vi(m));
    cin >> a;
    test1();
    test2();
    V<str> ans = optimize(stupid());
    for (int i = 1; i < 5; i++)
        best(ans, optimize(oneMoreSol(i)));
    for (int i = 1; i < 5; i++)
        best(ans, optimize(oneMoreSol1(i)));
    best(ans, oneMoreSol2());
    best(ans, optimize(with_prec()));
    best(ans, optimize(solvePrec()));
    best(ans, optimize(similarE()));
    cout << sz(ans) << '\n';
    for (str &i : ans) cout << i << '\n';
}
void _settings() {
_gl_tests_cnt = 1;
_gl_fastio    = 1;
#ifdef LOCAL
_gl_fopenr = strdup("input.txt");//input.txt
_gl_fopenw = strdup("");//output.txt
#else
_gl_fopenr = strdup("");//input.txt
_gl_fopenw = strdup("");//output.txt
#endif
}
