#include<bits/stdc++.h>
#define int long long
using namespace std;

const int maxn=1e4+1,inf=1e4+1;

int a,n;//,//d[maxn]//;
vector<vector<int>> vt;
void solve(int k)
{
    //for (auto val:vt[1]) cout<<val<<endl;
    for (int i=1; i<=n; i++)
    {
        int d=1;
        if (vt[i].size()==0) continue;
        while (d<=n-k+1)
        {
            int pos=*lower_bound(vt[i].begin(),vt[i].end(),d);
            if (pos>=d&&pos<=k+d-1) d++;
            else break;
        }
        if (d>n-k+1)
        {
            cout<<i<<" ";
            return;
        }
    }
    cout<<-1<<" ";
}





int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q;
    cin>>q;
    while (q--)
    {
        cin>>n;
        vt.clear();
        vt.resize(n+1);
        for (int i=1; i<=n; i++)
        {
            int a;
            cin>>a;
            vt[a].push_back(i);
        }
        for (int k=1; k<=n; k++)
        {
            //solve(i);
            bool ck=false;
            for (int i=1; i<=n; i++)
            {
                int d=1;
                if (vt[i].size()==0) continue;
                while (d<=n-k+1)
                {
                    int pos=*lower_bound(vt[i].begin(),vt[i].end(),d);
                    if (pos>=d&&pos<=k+d-1) d++;
                    else break;
                }
                if (d>n-k+1)
                {
                    cout<<i<<" ";
                    ck=true;
                    break;
                }
            }
            if (!ck) cout<<-1<<" ";
        }
        cout<<endl;
    }
}
