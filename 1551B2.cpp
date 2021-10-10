#include<bits/stdc++.h>
#define II pair<int,int>
#define se second
#define fi first
using namespace std;
int d[200001],ans[200001],cnt[200001];
vector<int> gr[200001];
vector<II> v;
int main()
{
    freopen("abc.inp","r",stdin);
    freopen("abc.out","w",stdout);
    int q;
    cin>>q;
    while (q--)
    {
        int n,k;
        cin>>n>>k;
        v.clear();
        for (int i=1;i<=n;i++) d[i]=0,ans[i]=0;
        for (int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            d[a]++;
            if (d[a]<=k) v.push_back(II(a,i));
        }
        sort(v.begin(),v.end());
        while (v.size()%k) v.erase(v.begin());
        int c=0;
        for (auto val:v) ans[val.se]=c%k+1,c=(c+1)%k;
        for (int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}
