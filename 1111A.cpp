#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int n;
    cin>>n;
    int ans=-1,p1=-2,p2=-2;
    int cnt[3];
    //d[0]=0,d[1]=0;
    cin>>s;
    for (int l=0;l<s.length();l++)
    {
        cnt[0]=0,cnt[1]=0;
        for (int r=l;r<s.length();r++)
        {
            cnt[(s[r]-'a')]++;
            if (cnt[0]==cnt[1])
            {
                if (ans<r-l+1)
                {
                    ans=r-l+1;
                    p1=l,p2=r;
                }
            }
        }
    }
    cout<<p1+1<<" "<<p2+1<<endl;
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
