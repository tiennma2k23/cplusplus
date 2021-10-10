#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
char ch[maxn],t[maxn];
bool ok[maxn];
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n,ans=0;
        cin>>n;
        for (int i=1;i<=n;i++) cin>>ch[i],ok[i]=0;
        for (int i=1;i<=n;i++) cin>>t[i];
        for (int i=1;i<=n;i++) if (t[i]=='1')
        {
            bool ck=false;
            if (ch[i]=='0')
            {
                ck=true;
                ok[i]=1;
                ans++;
            }
            if (i>1&&!ck)
            {
                if (ch[i-1]=='1'&&!ok[i-1])
                {
                    ans++;
                    ok[i-1]=1;
                    ck=true;
                }
            }
            if (i<n&&!ck)
            {
                if (ch[i+1]=='1'&&!ok[i+1])
                {
                    ck=true;
                    ans++;
                    ok[i+1]=1;
                }
            }
        }
        cout<<ans<<endl;
    }
}
