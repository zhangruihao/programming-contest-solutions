
/***
 *                                                                                                                                                                                 
 *                                                                                                                                                                         dddddddd
 *                   AAA                                                                                                     tttt                                          d::::::d
 *                  A:::A                                                                                                 ttt:::t                                          d::::::d
 *                 A:::::A                                                                                                t:::::t                                          d::::::d
 *                A:::::::A                                                                                               t:::::t                                          d:::::d 
 *               A:::::::::A            cccccccccccccccc    cccccccccccccccc    eeeeeeeeeeee    ppppp   ppppppppp   ttttttt:::::ttttttt        eeeeeeeeeeee        ddddddddd:::::d 
 *              A:::::A:::::A         cc:::::::::::::::c  cc:::::::::::::::c  ee::::::::::::ee  p::::ppp:::::::::p  t:::::::::::::::::t      ee::::::::::::ee    dd::::::::::::::d 
 *             A:::::A A:::::A       c:::::::::::::::::c c:::::::::::::::::c e::::::eeeee:::::eep:::::::::::::::::p t:::::::::::::::::t     e::::::eeeee:::::ee d::::::::::::::::d 
 *            A:::::A   A:::::A     c:::::::cccccc:::::cc:::::::cccccc:::::ce::::::e     e:::::epp::::::ppppp::::::ptttttt:::::::tttttt    e::::::e     e:::::ed:::::::ddddd:::::d 
 *           A:::::A     A:::::A    c::::::c     cccccccc::::::c     ccccccce:::::::eeeee::::::e p:::::p     p:::::p      t:::::t          e:::::::eeeee::::::ed::::::d    d:::::d 
 *          A:::::AAAAAAAAA:::::A   c:::::c             c:::::c             e:::::::::::::::::e  p:::::p     p:::::p      t:::::t          e:::::::::::::::::e d:::::d     d:::::d 
 *         A:::::::::::::::::::::A  c:::::c             c:::::c             e::::::eeeeeeeeeee   p:::::p     p:::::p      t:::::t          e::::::eeeeeeeeeee  d:::::d     d:::::d 
 *        A:::::AAAAAAAAAAAAA:::::A c::::::c     cccccccc::::::c     ccccccce:::::::e            p:::::p    p::::::p      t:::::t    tttttte:::::::e           d:::::d     d:::::d 
 *       A:::::A             A:::::Ac:::::::cccccc:::::cc:::::::cccccc:::::ce::::::::e           p:::::ppppp:::::::p      t::::::tttt:::::te::::::::e          d::::::ddddd::::::dd
 *      A:::::A               A:::::Ac:::::::::::::::::c c:::::::::::::::::c e::::::::eeeeeeee   p::::::::::::::::p       tt::::::::::::::t e::::::::eeeeeeee   d:::::::::::::::::d
 *     A:::::A                 A:::::Acc:::::::::::::::c  cc:::::::::::::::c  ee:::::::::::::e   p::::::::::::::pp          tt:::::::::::tt  ee:::::::::::::e    d:::::::::ddd::::d
 *    AAAAAAA                   AAAAAAA cccccccccccccccc    cccccccccccccccc    eeeeeeeeeeeeee   p::::::pppppppp              ttttttttttt      eeeeeeeeeeeeee     ddddddddd   ddddd
 *                                                                                               p:::::p                                                                           
 *                                                                                               p:::::p                                                                           
 *                                                                                              p:::::::p                                                                          
 *                                                                                              p:::::::p                                                                          
 *                                                                                              p:::::::p                                                                          
 *                                                                                              ppppppppp                                                                          
 *                                                                                                                                                                                 
 */
#include <bits/stdc++.h>
using namespace std;
 
// #include <ext/rope>
// using namespace __gnu_cxx;
 
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
 
// typedef ll key_type;
// typedef null_mapped_type value_type;
// typedef tree<key_type, value_type, less<key_type>, rb_tree_tag, tree_order_statistics_node_update> rbtree;
 
// typedef __gnu_pbds::priority_queue<pi,greater<pi>,pairing_heap_tag > heap;
 
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// int rnd(int l,int r){return l+rng()%(r-l+1);}
 
typedef long long ll;
typedef double db;
typedef pair<int,int> PII;
typedef vector<int> VI;
 
#define rep(i,_,__) for (int i=(_); i<(__); ++i)
#define per(i,_,__) for (int i=(_-1); i>=(__); --i)

#define eb emplace_back
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define x1 _x
#define x2 __x
#define y1 _y
#define y2 __y
#define SZ(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define endl '\n'
   
const double pi = acos(-1.0);
   
namespace IO{
    bool REOF = 1; //为0表示文件结尾
    inline char nc() {
        static char buf[1 << 20], *p1 = buf, *p2 = buf;
        return p1 == p2 && REOF && (p2 = (p1 = buf) + fread(buf, 1, 1 << 20, stdin), p1 == p2) ? (REOF = 0, EOF) : *p1++;
    }
   
    template<typename T>
    inline bool read(T &x) {
        char c = nc();bool f = 0; x = 0;
        while (c<'0' || c>'9')c == '-' && (f = 1), c = nc();
        while (c >= '0'&&c <= '9')x = (x << 3) + (x << 1) + (c ^ 48), c = nc();
        if(f)x=-x;
        return REOF;
    }
 
    template<typename T>
    inline void write(T x){
        if(x > 9) write(x / 10);
        putchar('0'+x%10);
    }
   
    template<typename T, typename... T2>
    inline bool read(T &x, T2 &... rest) {
        read(x);
        return read(rest...);
    }
   
   
    inline bool need(char &c) { return ((c >= 'a') && (c <= 'z')) || ((c >= '0') && (c <= '9')) || ((c >= 'A') && (c <= 'Z')); }
    // inline bool need(char &c) { return ((c >= 'a') && (c <= 'z')) || ((c >= '0') && (c <= '9')) || ((c >= 'A') && (c <= 'Z')) || c==' '; }

    inline bool read_str(char *a) {
        while ((*a = nc()) && need(*a) && REOF)++a; *a = '\0';
        return REOF;
    }
   
    inline bool read_db(double &x){
        bool f = 0; char ch = nc(); x = 0;
        while(ch<'0'||ch>'9')  {f|=(ch=='-');ch=nc();}
        while(ch>='0'&&ch<='9'){x=x*10.0+(ch^48);ch=nc();}
        if(ch == '.') {
            double tmp = 1; ch = nc();
            while(ch>='0'&&ch<='9'){tmp=tmp/10.0;x=x+tmp*(ch^48);ch=nc();}
        }
        if(f)x=-x;
        return REOF;
    }
   
    template<typename TH>
    inline void _dbg(const char *sdbg, TH h){ cerr<<sdbg<<'='<<h<<endl; }
   
    template<class TH, class... TA>
    inline void _dbg(const char *sdbg, TH h, TA... a) {
        while(*sdbg!=',')cerr<<*sdbg++;
        cerr<<'='<<h<<','<<' '; _dbg(sdbg+1, a...);
    }
      
    template<typename T>
    ostream &operator<<(ostream& os, vector<T> V) {
        os << "[ "; for (auto vv : V) os << vv << ","; return os << " ]";
    }
   
    template<typename T>
    ostream &operator<<(ostream& os, set<T> V) {
        os << "[ "; for (auto vv : V) os << vv << ","; return os << " ]";
    }
 
    template<typename T>
    ostream &operator<<(ostream& os, map<T,T> V) {
        os << "[ "; for (auto vv : V) os << vv << ","; return os << " ]";
    }
  
    template<typename L, typename R>
    ostream &operator<<(ostream &os, pair<L,R> P) {
        return os << "(" << P.fi << "," << P.se << ")";
    }
 
    #ifdef BACKLIGHT
    #define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
    #else
    #define debug(...)
    #endif
}
 
 
 
 
using namespace IO;
const int N = 2e5 + 5;
const int M = 5e5 + 5;
const int MAXV = 1e6 + 5;
const int MOD = 998244353;              // 998244353 1e9+7
const int INF = 0x3f3f3f3f;             // 1e9+7 0x3f3f3f3f
const ll LLINF = 0x3f3f3f3f3f3f3f3f;    // 1e18+9 0x3f3f3f3f3f3f3f3f
const double eps = 1e-8;




 
// int dx[4] = { 0, 1, 0, -1 };
// int dx[8] = { 1, 0, -1, 1, -1, 1, 0, -1 };
// int dy[4] = { 1, 0, -1, 0 };
// int dy[8] = { 1, 1, 1, 0, 0, -1, -1, -1 };
 
 
 

 
// ll qp(ll a, ll b) {
//     ll res = 1;
//     a %= MOD;
//     assert(b >= 0);
//     while(b){
//         if(b&1)
//             res = res * a % MOD;
//         a = a * a % MOD;
//         b >>= 1;
//     }
//     return res;
// }
// ll inv(ll x) {return qp(x, MOD - 2);}
// ll factor[N], finv[N];
// void init() {
//  factor[0]=1;
//  for(int i=1; i<N; i++) factor[i] = factor[i-1] * i % MOD;
//  finv[N-1] = qp(factor[N-1], MOD - 2);
//  for(int i=N-2; i>=0; i--) finv[i] = finv[i+1] * (i+1) % MOD;
// }
// ll c(ll n, ll m) {
//     return factor[n] * finv[m] % MOD * finv[n-m] % MOD;
// }
 
 
 

 
// #define ls (x<<1)
// #define rs (x<<1|1)
// #define mid ((l+r)>>1)
// #define lson ls,l,mid
// #define rson rs,mid+1,r



 
 
// #define fore(_, __) for(int _=head[__]; _; _=e[_].nxt)
// int head[N], tot = 1;
// struct Edge {
//     int v, nxt;
//     Edge(){}
//     Edge(int _v, int _nxt):v(_v), nxt(_nxt) {}
// }e[M << 1];
// void addedge(int u, int v) {
//     e[tot] = Edge(v, head[u]); head[u] = tot++;
//     e[tot] = Edge(u, head[v]); head[v] = tot++;
// }
 


 
   
/**
 * **********     Backlight     **********
 * 一发入魂
 * 仔细读题，注意边界条件
 * 没有思路就试试逆向思维
 * 能不能把我掉的分还给我
 */

int n, k, a[505], b[505], dp[505][505];
void solve(int Case) {
    read(n, k);
    ll sa = 0, sb = 0;
    rep(i, 1, n+1) {
        read(a[i], b[i]);
        sa += a[i];
        sb += b[i];
    }
    dp[0][0] = 1;

    rep(i, 1, n+1) {
        rep(j, 0, k) {
            dp[i][j] = dp[i-1][((j-a[i])%k+k)%k];
            rep(t, 0, min(k-1, a[i])+1) {
                if((a[i] - t)%k + b[i] >= k) {
                    dp[i][j] |= dp[i-1][((j-t)%k + k)%k];
                }
            }
        }
    }

    ll ans = 0;
    rep(i, 0, k) {
        if(dp[n][i])
            ans = max(ans, (sa + sb - i) / k);
    }
    printf("%lld\n", ans);
}
 
int main()
{
#ifdef BACKLIGHT
    freopen("in.txt", "r", stdin);
#endif
    // ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _T; read(_T); for (int _ = 1; _ <= _T; _++) solve(_);
    // int _T=1; while(read(n)) solve(_T), _T++;
    solve(1);
    return 0;
}