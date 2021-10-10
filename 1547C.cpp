#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
const int inf=10000000;
void solve()
{
    int k,n,m;
    cin>>k>>n>>m;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=m;i++) cin>>b[i];
    int l=1,r=1;
    a[n+1]=inf,b[m+1]=inf;
    vector<int> ans;
    ans.clear();
    while (l<=n+1&&r<=m+1)
    {
        if (l==n+1&&r==m+1) break;
        int tmp=min(a[l],b[r]);
        if (tmp==0)
        {
            k++;
            if (a[l]==0) ans.push_back(a[l]),l++;
            else ans.push_back(b[r]),r++;
        }
        else if (tmp<=k)
        {
            if (a[l]==tmp) ans.push_back(a[l]),l++;
            else ans.push_back(b[r]),r++;
        }
        else
        {
            cout<<"-1"<<endl;
            return;
        }
    }
    for (auto val:ans)cout<<val<<' ';
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
