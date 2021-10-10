#include<bits/stdc++.h>
#define ABC"parity"
#define ll int
using namespace std;
int main()
{
    freopen(ABC ".inp","r",stdin);
    freopen(ABC ".out","w",stdout);
    ll nt;
    cin>>nt;
    while (nt--)
    {
        ll n;
        ll dem=0;
        cin>>n;
        while (n>0)
        {
            dem+=n%2;
            n/=2;
        }
        if (dem%2!=0) cout<<"odd"<<endl;
        else cout<<"even"<<endl;
    }
}
