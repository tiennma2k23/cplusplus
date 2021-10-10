#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define task "BACHO"
#define st first
#define nd second
#define taskname ""


using namespace std;

const int maxn=41;
ll n,a[maxn],sum=0,res=0,x,mid;
bool kta[maxn],ktb[maxn];
unordered_map<ll,ll> check;
bool ok=false;

ll solve1(ll j)
{
    ll ans=0;
    for(int i=1;i<=j;++i)
        if(kta[i])
            ans+=a[i];
    return ans;
}

void backtracking1(ll k)
{
    if(k>mid)
    {
        if(solve1(k)==x) res++;
        else ++check[solve1(k)];
        return;
    }
    kta[k]=true;
    backtracking1(k+1);
    kta[k]=false;
    backtracking1(k+1);
}

ll solve2(ll j)
{
    ll ans=0;
    for(int i=mid+1;i<=j;++i)
        if(ktb[i])
            ans+=a[i];
    return ans;
}

void backtracking2(ll k)
{
    if(k>n)
    {
        if(solve2(k)==x) ++res;
        else
        if(check[x-solve2(k)]>0 && x-solve2(k)>=0)
            res+=check[x-solve2(k)];
        return;
    }
    ktb[k]=true;
    backtracking2(k+1);
    ktb[k]=false;
    backtracking2(k+1);
}




int main()
{
/*#ifdef ONLINE_JUDGE
#else
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
#endif // ONLINE_JUDGE*/

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin>>n>>x;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    sort(a+1,a+1+n);

    mid=n/2;

    backtracking1(1);

    backtracking2(mid+1);

    cout<<res;

    return 0;
}
