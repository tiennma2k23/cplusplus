#include<bits/stdc++.h>
#define int long long
#define ld long double
using namespace std;
const int maxn=301;
ld f[maxn][maxn][maxn];
int cnt[4],n;
ld calc(int a,int b,int c)
{
    if (a==b&&b==c&&c==0) return 0;
    if (f[a][b][c]) return f[a][b][c];
    ld ans=1.0*n/(a+b+c);
    if (a) ans+=1.0*a/(a+b+c)*calc(a-1,b,c);
    if (b) ans+=1.0*b/(a+b+c)*calc(a+1,b-1,c);
    if (c) ans+=1.0*c/(a+b+c)*calc(a,b+1,c-1);
    return f[a][b][c]=ans;
}

int32_t main()
{
    cin>>n;
    int n1=n;
    while (n1--)
    {
        int x;
        cin>>x;
        cnt[x]++;
    }
    cout<<fixed<<setprecision(9)<<calc(cnt[1],cnt[2],cnt[3]);
}
