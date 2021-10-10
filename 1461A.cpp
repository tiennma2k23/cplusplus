#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,k;
        cin>>n>>k;
        ll tmp=k;
        ll tt=0;
        string s="";
        while (n>0)
        {
            ll t=min(tmp,n);
            for (ll i=1;i<=t;i++) s+=('a'+tt);
            if (tt==2) tmp--;
            tt=(tt+1)%3;
            if (tmp==0) tmp++;
            n-=t;
        }
        cout<<s<<endl;
    }
}
