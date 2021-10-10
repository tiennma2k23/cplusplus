#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=200;
ll d[maxn],c[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,q;
        string s;
        cin>>n>>q;
        cin>>s;
        while (q--)
        {
            ll l,r;
            string s1="";
            cin>>l>>r;
            for (ll i=l-1;i<r;i++) s1+=s[i];
            if (s1.length()<2)
            {
                cout<<"NO"<<endl;
                continue;
            }
            ll vt=0;
            for (ll i=0;i<n;i++)
            {
                if (s[i]==s1[vt]&&vt<s1.length()) d[vt]=i,vt++;
                if (vt==s1.length()) break;
            }
            if (vt<s1.length())
            {
                cout<<"NO"<<endl;
                continue;
            }
            vt=s1.length()-1;
            for (ll i=n-1;i>=0;i--)
            {
                if (s[i]==s1[vt]&&vt>=0) c[vt]=i,vt--;
                if (vt<0) break;
            }
            if (vt>=0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            bool ck=false;
            for (ll i=0;i<s1.length()-1;i++)
            {
                if (c[i+1]-d[i]>=2)
                {
                    ck=true;
                    break;
                }
            }
            if (ck) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
