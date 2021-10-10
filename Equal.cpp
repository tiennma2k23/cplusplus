#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=1e6;
ll minPrime[MAXN+10];
void sang(){
ll i,j;
for ( i = 2; i * i <= MAXN; ++i) {
    if (minPrime[i] == 0) {
        for ( j = i * i; j <= MAXN; j += i) {
            if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
    }
}
for (i = 2; i <= MAXN; ++i) {
    if (minPrime[i] == 0) {
        minPrime[i] = i;
    }
}
}
ll find_sl(ll n)
{
    ll res=0;
    while (n != 1) {
        res++;
        n /= minPrime[n];
    }
    return res;
}
ll Find(ll n, ll m)
{
    return max(find_sl(n),find_sl(m));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("EQUAL.INP","r",stdin);
    freopen("EQUAL.OUT","w",stdout);
    sang();
    ll t,a,b,uc;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        uc=__gcd(a,b);
        a=a/uc;b=b/uc;
        cout<<Find(a,b)<<endl;
    }
}
