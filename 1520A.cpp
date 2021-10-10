#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
bool ck[1000];
void solve()
{
    int n;
    cin>>n;
    string s;
    for (char ch='A';ch<='Z';ch++) ck[ch]=false;
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]!=s[i-1]&&ck[s[i]])
        {
            cout<<"NO"<<endl;
            return;
        }
        ck[s[i]]=true;
    }
    cout<<"YES"<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
