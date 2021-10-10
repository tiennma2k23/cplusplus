#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        string s;
        cin>>s;
        ll ans=0;
        for (ll i=s.length()-1;i>=0;i--)
        {
            ll num=s[i-1]*10+s[i];
            if (num%4==0) ans+=i;
            if ((s[i]-'0')%4==0) ans++;
        }
        cout<<ans<<endl;
}
