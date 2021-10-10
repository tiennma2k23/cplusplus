#include<bits/stdc++.h>
using namespace std;
vector<int> v;
const int maxn=500;
char ans[maxn][maxn];
void solve()
{
    int n;
    v.clear();
    cin>>n;
        for (int i=1;i<=n;i++)
        {
            char ch;
            cin>>ch;
            if (ch=='2') v.push_back(i);
        }
        if (!v.empty()) v.push_back(v[0]);
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
        {
            if (i==j) ans[i][j]='X';
            else ans[i][j]='=';
        }
        if (v.size()==2)
        {
            cout<<"NO"<<endl;
            return;
        }
        if (v.size()){
        for (int i=0;i<v.size()-1;i++)
        {
            if (ans[v[i]][v[i+1]]=='-')
            {
                cout<<"NO"<<endl;
                return ;
            }
            ans[v[i]][v[i+1]]='+';
            ans[v[i+1]][v[i]]='-';
        }
        }
        cout<<"YES"<<endl;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=n;j++) cout<<ans[i][j];
            cout<<endl;
        }
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
