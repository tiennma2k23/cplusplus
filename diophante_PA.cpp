#include<bits/stdc++.h>
using namespace std;

#define int long long
#define II pair<int,int>
#define fi first
#define se second

II extended_gcd(int a, int b)
{
    II qr, st;
    if (b == 0)
        return II(1, 0);
    else
    {
        qr = II(a / b, a % b);
        st = extended_gcd(b, qr.se);
        return II(st.se, st.fi - qr.fi * st.se);
    }
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}

int a, b, c, g;
int32_t main()
{
    //freopen("diophante.inp","r",stdin);
    //freopen("diophante.out","w",stdout);
    cin>>a>>b>>c;
    g = gcd(a, b);
    if (c % g != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    II st = extended_gcd(a, b);
    int ans1=c / g * st.fi;
    int ans2=c / g * st.se;
    //cout<<ans1<<" "<<ans2<<endl;
    if (ans1>ans2) swap(ans1,ans2),swap(a,b);
    int x1=b/g,x2=a/g;
    //ans1+x1*t>0 ans2-x2*t>0
    int t1=(abs(ans1)/(x1))-10;
    while (ans1<=-t1*x1) t1++;
    int t2=ans2/x2+10;
    while (ans2<=t2*x2) t2--;
    cout<<max(t2-t1+1,0ll)<<endl;
}
