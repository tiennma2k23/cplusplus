#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    string s;
    ll n;
    cin>>n>>s;
    if (s[0]=='0'||s[n-1]=='0')
    {
        cout<<"NO"<<endl;
        return;
    }
    ll d0=0,d1=0;
    for (ll i=0;i<n;i++)
    {
        d0+=s[i]=='0';
        d1+=s[i]=='1';
    }

    if (d0%2!=0||d1%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }

    string a="",b="";
    ll tmp1=0,tmp0=0,ta=0,tb=0;
    for (ll i=0;i<n;i++)
    {
        if (s[i]=='1')
        {
            if (tmp1*2<d1)
            {
                tmp1++;
                a+='(',b+='(';
                ta++,tb++;
            }
            else
            {
                tmp1++;
                a+=')',b+=')';
                ta--,tb--;
            }
        }
        else
        {
            if (tmp0%2)
            {
                a+=')',b+='(';
                ta--,tb++;
                tmp0++;
            }
            else
            {
                tmp0++;
                a+='(',b+=')';
                tb--,ta++;
            }
        }
        if (ta<0||tb<0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl<<a<<endl<<b<<endl;
}
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
