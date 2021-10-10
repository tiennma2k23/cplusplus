#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main()
{
    string s;
    int i,c,ans=0,t=0;
    cin>>s;
    c=1;
    for (i=0;i<s.length();i++)
        {
            t=((1ll*t*10%mod)+(1ll*c*(s[i]-'0')%mod))%mod;
            ans=(ans+t)%mod;
            if (s[i]!='0') c++;
        }
    cout<<ans<<endl;
}
