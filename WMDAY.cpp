#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn=3e5+1;

int n,t,a[maxn];

void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;

    number = 0;

    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;

        // extract the next character from the buffer
        c = getchar();
    }

    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;

    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

bool good(ll x)
{
    ll res=0;
    for (ll i=1;i<=n;i++)
    {
        res+=x/a[i];
    }
    return res>=t;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //cin>>n>>t;
    fastscan(n);
    fastscan(t);
    for (int i=1;i<=n;i++) fastscan(a[i]);
    ll l=1,r=1,ans;
    while (!good(r))
    {
        l=r;
        r*=2;
    }
    while (l<=r)
    {
        ll mid=(l+r)/2;
        if (good(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans;
}
