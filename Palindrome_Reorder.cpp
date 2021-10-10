#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll d[1000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    char ch;
    ll deml=0;
    while (cin>>ch)
    {
        d[ch]++;
    }
    for (ch='A';ch<='Z';ch++) deml+=d[ch]%2;
    if (deml>1)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    for (ll ch='A';ch<='Z';ch++)
    {
        if (d[ch]%2==0)
        {
            for (ll i=1;i<=d[ch]/2;i++) cout<<char(ch);
        }
    }
    for (ll ch='A';ch<='Z';ch++)
    {
        if (d[ch]%2==1)
        {
            for (ll i=1;i<=d[ch];i++) cout<<char(ch);
        }
    }

    for (ll ch='Z';ch>='A';ch--)
    {
        if (d[ch]%2==0)
        {
            for (ll i=1;i<=d[ch]/2;i++) cout<<char(ch);
        }
    }

}
