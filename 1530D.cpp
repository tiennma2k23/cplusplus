#include<bits/stdc++.h>
using namespace std;
#define int long long
#define use used
const int maxn=2e5+5;

int a[maxn],b[maxn];
bool gr[maxn],use[maxn];

void solve()
{
    vector<int> v1,v2,v3;
    v1.clear();v2.clear();v3.clear();
    int n;
    cin>>n;
        for (int i=1;i<=n;i++)
        {
            cin>>b[i];
            a[i]=-1;
            gr[i]=false;
            used[i]=false;
        }
        for (int i=1;i<=n;i++) if (!used[b[i]])
        {
            a[i]=b[i];
            used[b[i]]=true;
        }
        for (int i=1;i<=n;i++)
        {
            if (a[i]==-1) v1.push_back(i);
            if (!used[i]) v2.push_back(i);
        }
        if (v1.size()==1 && v2.size()==1 && v2[0]==v1[0])
        {
            a[v1[0]]=v1[0];
            bool ok=false;
            for (int i=1;i<=n;i++) if (i!=v1[0] && a[i]!=-1 && b[i]==b[v1[0]])
            {
                swap(a[v1[0]],a[i]);
                ok=true;
                break;
            }
            if (!ok) for (int i=1;i<=n;i++) if (i!=v1[0] && a[i]!=-1)
            {
                swap(a[v1[0]],a[i]);
                break;
            }
        } else
        {
            for (int i=1;i<=n;i++) if (a[i]==-1 && !used[i])
            {
                a[i]=i;
                used[i]=true;
                v3.push_back(i);
                gr[i]=true;
            }
            for (int i=1,j=1;i<=n;i++) if (a[i]==-1)
            {
                while (j<=n && used[j]) j++;
                a[i]=j;
                used[j]=true;
                gr[i]=true;
            }
            if (v3.size()>1)
            {
                for (int i=1;i<v3.size();i++) a[v3[i-1]]=v3[i];
                a[v3.back()]=v3[0];
            } else if (v3.size()==1)
            {
                for (int i=1;i<=n;i++) if (gr[i] && i!=v3[0])
                {
                    swap(a[i],a[v3[0]]);
                    break;
                }
            }
        }
        int ans=0;
        for (int i=1;i<=n;i++) ans+=(a[i]==b[i]);
        cout<<ans<<endl;
        for (int i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;
}

int32_t main()
{
	int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
	return 0;
}
