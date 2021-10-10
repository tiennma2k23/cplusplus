#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll tmp=a+b+c-3;
        ll tmp1=tmp/9*9;
        if (tmp1>tmp) tmp1-=9;
        ll tmp2=tmp-tmp1;
        if (tmp2%7==6)
        {
            ll so=tmp1/9;
            if (a>=so+1&&b>=so+1&&c>=so+1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
