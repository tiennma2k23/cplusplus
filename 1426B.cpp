#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,m;
        ll d=0;
        cin >> n >> m;
        for (ll i=1;i<=n;i++)
            {
                ll x,y,x1,y1;
                cin >> x >> y >> x1 >> y1;
                if (y==x1) d++;
            }
        if (m%2!=0) cout << "NO" << endl;
        else {
            if (d>0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
