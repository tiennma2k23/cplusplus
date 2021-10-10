#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a,b,c;

void sub1_2()
{
    ll ans=0;
    while(a<b)
        {
            ans++;
            if ((a+2)%c!=0) a+=2;
            else a++;
        }
    cout<<ans<<endl;
}

void sub3()
{
    ll ans=0;
    if (a%2==0) ans++,a++;
    ans+=(b-a+1)/2;
    cout<<ans<<endl;
}

void sub4()
{
    ll tmp=a/c;
    ll d1=tmp*c+c-1;
    ll ans=(d1-a+1)/2;
    ll sl=b/c-a/c;
    ll s=(b/c)*c+1;
    ans+=(b-s+1)/2;
    ans+=(sl-1)*((c-1)/2)+sl;
    if (c==2) cout<<sl<<endl;
    else cout<<ans<<endl;
}
int main()
{
    cin>>a>>b>>c;
    if (c==2) sub3();
    else if(b-a<=5e7) sub1_2();
    else sub4();
}
