#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int ans=0;
    string s;
    int x;
    cin>>s>>x;
    for (int i=0;i<s.length();i++)
    {
        ans+=(s[i]-'a'+x)%26;
    }
    cout<<ans<<endl;
}
