#include<bits/stdc++.h>
using namespace std;
int f[200000];
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        cin>>s;
        bool ok[4];
        ok[0]=0;
        ok[1]=0;
        ok[2]=0;
        for (int i=0;i<s.length();i++) ok[s[i]-'0']=1;
        int ans;
        for (int i=2;i>=0;i--)
        {
            if (ok[i]==0) ans=i;
        }
        int dem=0;
        for (int i=1;i<s.length();i++) if (s[i]!=s[i-1]) dem++;
        if (dem==1||(dem==2&&s[0]=='1')) ans=1;
        else if (dem>=2) ans=2;
        cout<<ans<<endl;
    }
}
