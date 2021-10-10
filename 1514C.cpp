#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
/*int phi(int n) {
    int res = n;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            res -= res / i;
        }
    }
    if (n != 1) {
        res -= res / n;
    }
    return res;
}*/
int phi(int n) { // = n (1-1/p1) ... (1-1/pn)
    if (n == 0) return 0;
    int ans = n;
    for (int x = 2; x*x <= n; ++x) {
        if (n % x == 0) {
            ans -= ans / x;
            while (n % x == 0) n /= x;
        }
    }
    if (n > 1) ans -= ans / n;
    return ans;
}
ll sqr(ll x,ll mod)
{
    return (x*x)%mod;
}

ll pow(ll a,ll b,ll mod)
{
    if (b==0) return 1;
    else
    {
        if (b%2==0) return sqr(pow(a,b/2,mod),mod);
        else return (a*(sqr(pow(a,b/2,mod),mod)))%mod;
    }
}
vector<int> ck(1000000,0);vector<int> s,s1;
int32_t main()
{

    ll n;
    cin>>n;
    //cout<<phi(n)<<endl;
    ll tmp=phi(n)-1;
    //cout<<tmp<<endl;
    for (ll i=1;i<n;i++)
    {
        ll t=pow(i,tmp,n);
        if (!ck[i]&&!ck[t]&&i!=t&&t>0&&(i*t)%n==1)
        {
            s.push_back(i),s.push_back(t);
            ck[i]=true;
            ck[t]=true;

        }
    }
    ll dem=0;
    //for (ll i=1;i<n;i++) ck[i]=false;
    for (ll i=1;i<n;i++)
    {
        ll t=(n*n-pow(i,tmp,n))%n;
        if (!ck[i]&&!ck[t]&&i!=t&&t>0&&(i*t)%n==n-1)
        {
            s1.push_back(i),s1.push_back(t);
            ck[i]=true;
            ck[t]=true;
            dem++;
        }
    }
    if (dem%2==1) s1.pop_back(),s1.pop_back();
    set<int> st;
    st.clear();
    for (auto v:s1)
    {
        st.insert(v);
    }
    for (auto v:s)
    {
        st.insert(v);
    }
    if (*st.begin()!=1) cout<<st.size()+1<<endl<<1<<" ";
    else cout<<st.size()<<endl;
    while (!st.empty())
    {
        auto it=st.begin();
        cout<<*it<<" ";
        st.erase(it);
    }
}
