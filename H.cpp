#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    //freopen("ABC.inp","r",stdin);
    //freopen("ABC.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin>>s;
    ll d=1,max1=1;
    for (ll i=1;i<s.length();i++)
    {
        if (s[i]==s[i-1]) d++;
        else d=1;
        max1=max(max1,d);
    }
    cout<<max1<<endl;
}
