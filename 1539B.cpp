#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+5;
int d[maxn][30];
int32_t main()
{
    int n,q;
    string s;
    cin>>n>>q>>s;
    s=' '+s;
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<26; j++) d[i][j]=d[i - 1][j] ;
        d[i][s[i]-'a']++ ;
    }
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        int ans=0;
        for (int i=0; i<26; i++)
        {
            ans+=(i + 1)*(d[r][i]-d[l - 1][i]) ;
        }
        cout<<ans<<endl;
    }
}
