#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int ans=0;
    string t,s;
    cin>>t>>s;
    for (int i=0;i<=s.length()-t.length();i++)
    {
        for (int j=i;j<i+t.length();j++) ans+=(s[j]==t[j-i]);
    }
    cout<<ans<<endl;
}
