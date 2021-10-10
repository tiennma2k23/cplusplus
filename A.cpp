#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+1;
string st[maxn];
int32_t main()
{
    freopen("A1.inp","r",stdin);
    freopen("A1.out","w",stdout);
    int cnt=0,maxx=-1;
    string s;
    while (cin>>s)
    {
        cnt++;
        st[cnt]=s;
        int sz=s.length();
        maxx=max(maxx,sz);
    }
    for (int i=1;i<=cnt;i++) if (st[i].length()==maxx) cout<<st[i]<<endl;
}
