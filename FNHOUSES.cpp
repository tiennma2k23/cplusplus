#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e3+1;
char ch[maxn][maxn];
int32_t main()
{
    int m,n,bonus=0,ans=0;
    cin>>m>>n;
    for (int i=1;i<=m;i++) for (int j=1;j<=n;j++) cin>>ch[i][j];
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++)
    {
        if (ch[i][j]=='#')
        {
            if (ch[i][j-1]=='#') ans++;
            if (ch[i-1][j]=='#') ans++;
            if (ch[i-1][j-1]=='#') ans++;
            if (ch[i-1][j+1]=='#') ans++;
        }
        else
        {
            int tmp=0;
            if (ch[i][j-1]=='#') tmp++;
            if (ch[i][j+1]=='#') tmp++;
            if (ch[i-1][j]=='#') tmp++;
            if (ch[i+1][j]=='#') tmp++;
            if (ch[i-1][j-1]=='#') tmp++;
            if (ch[i-1][j+1]=='#') tmp++;
            if (ch[i+1][j-1]=='#') tmp++;
            if (ch[i+1][j+1]=='#') tmp++;
            bonus=max(bonus,tmp);
        }
    }
    //cout<<ans<<endl;

    ans+=bonus;
    cout<<ans<<endl;
}
