#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    set<ll> ans;
    cin>>s;
    ll l=0,r=0;
    for (ll i=0;i<s.length();i++)
    {
        if (s[i]>='0'&&s[i]<='9')
        {
            if (s[i-1]==';')
            {
                if (r==0) ans.insert(l);
                else for (ll j=l;j<=r;j++) ans.insert(j);
                l=s[i]-48;
                r=0;
            }
            else if (s[i-1]=='-') r=s[i]-48;
            else if (r==0) l=l*10+s[i]-48;
            else r=r*10+s[i]-48;
        }
       // cerr<<l<<" "<<r<<" "<<ans.size()<<endl;
    }
    if (r==0) ans.insert(l);
    else for (ll j=l;j<=r;j++) ans.insert(j);
    cout<<ans.size()<<endl;
}
