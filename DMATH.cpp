#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
vector<II> gr,gr1;
int v[100];
void solve()
{
    int a,b,c,n,dem=0;
    gr.clear();
    cin>>a>>b>>c>>n;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        for (int i=1;i<=y;i++) dem++,v[dem]=x;
    }
    if (dem>15)
    {cout<<"NO"<<endl;return;}
    sort(v+1,v+1+dem);
    gr.push_back(II(a%c,b%c));
    for (int i=1;i<=dem;i++)
    {
        gr1.clear();
        for (auto val:gr)
        {
            int a1=(val.fi*v[i])%c;
            int b1=(val.se*v[i])%c;
            if ((a1+val.se)%c==0||(val.fi+b1)%c==0)
            {
                cout<<"YES"<<endl;
                return;
            }
            gr1.push_back(II(a1,val.se));
            gr1.push_back(II(val.fi,b1));
        }
        for (auto val:gr1) gr.push_back(val);
    }
    cout<<"NO"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
