#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int b[maxn],cnt[maxn],a[maxn],n;
void sub1()
{
    list<int> ls;
    int ans=0;
    int s=1<<(n-1);
    for (int mask=0; mask<s; mask++)
    {
        ls.clear();
        ls.push_back(a[0]);
        for (int i=0; i<n-1; i++)
        {
            if (mask&(1<<i)) ls.push_back(a[i+1]);
            else ls.push_front(a[i+1]);
        }
        for (int i=0; i<=n; i++) b[i]=0;
        int m=0;
        for (auto val:ls)
        {
            int F = lower_bound(b + 1, b + m + 1, val) - b;
            m = max(m, F);
            b[F] = val;
            cnt[F]++;
        }
        //cnt[m]++;
        ans=max(ans,m);
    }
    cout<<ans<<" "<<cnt[ans]<<endl;
}

void sub2()
{
    int ans=0;
    list<int> ls;
    for (int i=n-1;i>=0;i--) ls.push_back(a[i]);
    for (int i=0;i<n;i++) ls.push_back(a[i]);
    int m=0;
        for (auto val:ls)
        {
            int F = lower_bound(b + 1, b + m + 1, val) - b;
            m = max(m, F);
            b[F] = val;
            cnt[F]++;
        }
    cout<<m<<" "<<pow(2,n-m+1)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for (int i=0; i<n; i++) cin>>a[i];
    if (n<=20) sub1();
    else sub2();
}
