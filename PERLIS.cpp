#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 10 + 1e6;
const ll oo = 1 + 1e18, mod = 7 + 1e9;
ll n, a[MAXN], b[MAXN];
vector <ll> g[MAXN];
int main(){
    ll i,num;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        g[a[i]].push_back(i);
    }
    num = n;
    for (i = 1; i <= n; i++){
        for (auto v : g[i]){
            b[v] = num;
            num--;
        }
    }
    for (i = 1; i <= n; i++) cout<<b[i]<<' ';
}
