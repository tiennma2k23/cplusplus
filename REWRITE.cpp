#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t[100001];
int main()
{
    freopen("REWRITE.inp","r",stdin);
    freopen("REWRITE.out","w",stdout);
    string a,b;
    cin>>a>>b;
    a=' '+a;
    b=' '+b;
    ll sum=0;
    //while (b.length()<a.length()) b+='0';
    for (int i=1;i<a.length();i++)
    {
        sum+=a[i]-'0';
        t[i]=sum;
    }
    int k=b.length();
    for (int i=1;i<b.length();i++)
    {
        ll so=0;
        for (int j=i;j<=min(k,i+6-1);j++)
        {
            so=so*10+b[j]-'0';
            //cout<<so<<endl;
        if (so==t[(a.length()-b.length())+j]-t[i-1])
        {
            cout<<i<<" "<<a.length()-b.length()+j<<endl;
            return 0;
        }
        //cerr<<so<<endl;
        }
    }

}
