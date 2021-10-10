#include<bits/stdc++.h>
#define ll long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll q;
    cin>>q;
    while (q--)
    {
        ll x,y,ans;
        cin>>x>>y;
        if (x<y)
        {
            if (y%2==1)
            {
                ans=y*y-x+1;
            }
            else
            {
                ans=(y-1)*(y-1)+1+x-1;
            }
        }
        else
        {
            if (x%2==1)
            {
                ans=(x-1)*(x-1)+1+y-1;
            }
            else ans=x*x-y+1;
        }
        cout<<ans<<endl;
    }
}
