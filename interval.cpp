#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll sl[20],d[20],p[20];

void prepare()
{
    sl[1]=1;
    sl[2]=1;
    for (ll i=3;i<=18;i++) sl[i]=sl[i-1]*10;
    for (ll i=1;i<=18;i++)
    {
        d[i]=d[i-1]+sl[i]*9;
    }
    p[0]=1;
    for (ll i=1;i<=18;i++) p[i]=p[i-1]*10;
}

ll get(ll x)
{
    string s=to_string(x);
    ll res=d[s.length()-1];
    ll tmp=s[0]-48;
    res+=(tmp-1)*sl[s.length()];
    if (s[0]<=s[s.length()-1]){
    if (s.length()>0) s.erase(0,1);
    if (s.length()>0) s.erase(s.length()-1,1);
        ll num=0;
        for (ll i=0;i<s.length();i++) num=num*10+s[i]-48;
        res+=num+1;
    }
    return res;
}
int main()
{
    ll l,r;
    prepare();
    cin>>l>>r;
    cout<<get(r)-get(l-1)<<endl;
}
