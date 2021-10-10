#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        string s;
        ll ans=0;
        cin>>s;
        deque<ll> nv,nt;
        nv.clear();nt.clear();
        for (ll i=0;i<s.length();i++)
        {
            if (s[i]=='(') nt.push_back(i);
            else if (s[i]=='[') nv.push_back(i);
            else if (s[i]==')')
            {
                if (!nt.empty())
                {
                    ans++;
                    nt.pop_back();
                }
            }
            else
            {
                if (!nv.empty())
                {
                    ans++;
                    nv.pop_back();
                }
            }
        }
        cout<<ans<<endl;
    }
}
