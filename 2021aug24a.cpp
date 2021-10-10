#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e6+5;
int cnt[30],cnt1[maxn];
int32_t main()
{
    string s,t;
    cin>>t>>s;
    t=' '+t;
    s=' '+s;
    int pos=1,ans=0;
    for (int i=1;i<s.length();i++)
    {
        if (i<t.length()) cnt1[i]=cnt[t[i]-'a'];
        cnt[s[i]-'a']++;
        if (i>s.length()-t.length())
        {
            ans+=cnt[t[pos]-'a']-cnt1[pos];
            //cout<<cnt1[pos]<<pos<<cnt[t[pos]-'a']<<endl;
            pos++;
        }
        //cout<<char(t[pos-1])<<ans<<endl;
    }
    cout<<ans<<endl;
}
