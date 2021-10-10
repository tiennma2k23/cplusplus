#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1;
int x[maxn], y[maxn];
bool ck[maxn];
void solve()
{
    int n,k;
    cin >> n >> k;

    int ans = (n-k)*(n-k-1)/2;
    bool ok = false;
    int temp = 0;
    for (int i = 1; i <= 2*n; i++)
    {
        ck[i]=false;
    }
    for (int i = 0; i < k; i++)
    {
        cin>>x[i]>>y[i];
        if (x[i] > y[i])
            swap(x[i],y[i]);
        else
        {
            ok = false;
        }
        ck[x[i]] = true;
        ck[y[i]] = true;
        for (int j = 0; j < i; j++)
        {
            if (ok)
            {
                return;
            }
            ans += (x[i] < x[j]) && (x[j] < y[i]) && (y[i] < y[j]) || (x[j] < x[i]) && (x[i] < y[j]) && (y[j] < y[i]);
        }
    }
    for (int i = 0; i < k; i++)
    {
        int tmp = 0;
        for (int j = x[i] + 1; j < y[i]; j++)
            tmp += !ck[j];
        if (ok)
        {
            return;
        }
        ans += min(tmp, 2*(n - k) - tmp);
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
    return 0;
}
