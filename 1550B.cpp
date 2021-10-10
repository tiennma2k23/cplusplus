#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b,sl=0;
    string s;
    cin>>n>>a>>b;
    cin>>s;
    int ans=(a+b)*n;
        int dem=1,maxx=0,pos;sl=1;
        for (int i=1;i<s.length();i++)
        {
            if (s[i]!=s[i-1])
            {
                sl++;
            }
        }
    ans=max(ans,a*n+b*(sl/2+1));
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
