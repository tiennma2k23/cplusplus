#include<bits/stdc++.h>
#define ABC"replacedigit"
#define ll long long
using namespace std;
int main()
{
    freopen(ABC ".inp","r",stdin);
    freopen(ABC ".out","w",stdout);
    ll nt;
    cin>>nt;
    while (nt--)
    {
        string s;
        cin>>s;
        for (ll i=0;i<s.length();i++)
        {
            if (s[i]=='0') cout<<5;
            else cout<<s[i];
        }
        cout<<endl;
    }
}
