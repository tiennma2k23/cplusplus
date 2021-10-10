#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,cnt=0;
    string s;
    cin>>n;
    cin>>s;
    for (int i=0;i<s.length();i++) cnt+=(s[i]=='0');
    if (cnt%2==0) cout<<"BOB"<<endl;
    else
    {
        if (cnt==1) cout<<"BOB"<<endl;
        else cout<<"ALICE"<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
