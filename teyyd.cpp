#include <bits/stdc++.h>
using namespace std;
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
*/

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef map<ll, ll> mll;
typedef unordered_map<ll, ll> umll;
template <class T1, class T2>
void maximize(T1 &a, T2 b){
    if (b > a) a = b;
}
template <class T1, class T2>
void minimize(T1 &a, T2 b){
    if (b < a) a = b;
}
template <class T>
void read(T &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-'){
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}
template <class T, class ...Ts>
void read(T &a, Ts& ... args){
    read(a);
    read(args...);
}

/*
struct Node
{
    int node, len;
    Node() {node = len = 0;}
    Node(int node, int len) {this -> node = node, this -> len = len;}
};
typedef vector<Node> vg;
*/

#define MAX 1000001
#define MOD 1000000007

#define fi first
#define se second
#define pf push_front
#define pb push_back

#define FOR(type, i, a, b) for(type i = (a); i <= (b); i++)
#define FORD(type, i, b, a) for(type i = (b); i >= (a); i--)

#define testBit(n, bit) ((n >> bit) & 1)
#define flipBit(n, bit) (n ^ (1ll << bit))
#define cntBit(n) __builtin_popcount(n)
#define cntBitll(n) __builtin_popcountll(n)
#define randomize mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());

ll n;
pll a[MAX];
ll dist(pll a, pll b){
    return abs(a.fi - b.fi) + abs(a.se - b.se);
}
bool check(pll a, pll b, pll c){
    if (dist(a, b) + dist(a, c) == dist(b, c)) return false;
    if (dist(a, b) + dist(b, c) == dist(a, c)) return false;
    if (dist(c, b) + dist(a, c) == dist(b, a)) return false;
    return true;
}
bool check(pll a, pll b, pll c, pll d){
    return check(a, b, c)
        && check(a, b, d)
        && check(a, c, d)
        && check(b, c, d);
}
main()
{
    freopen("abc.inp","r",stdin);
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t; cin >> t;
    FOR(ll, _, 1, t){
        ll n; cin >> n;
        FOR(ll, i,1, n){cin >> a[i].fi; a[i].se = i;}
        ll answer = n + n - 1;
        // cout << answer << ' ';

        FOR(ll, i, 1, n - 2){
            answer += check(a[i], a[i + 1], a[i + 2]);
            if (i < n - 2)
                answer += check(a[i], a[i + 1], a[i + 2], a[i + 3]);
        }
        cout << answer << '\n';
    }
}
