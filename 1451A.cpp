#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,ans=0;
        cin>>n;
        if (n==1) cout<<0<<endl;
        else if (n%2==0)
        {
            cout<<1+(n!=2)<<endl;
        }
        else cout<<2+(n-1!=2)<<endl;
    }
}
