#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,dem=0;
    cin>>n;
    ll tmp=9e5;
    for (ll i=1;i*i<=tmp;i++)
    {
        if (tmp%i==0)
        {
            dem++;
            cout<<i<<" ";
            if (dem==n) return 0;
            if (i*i!=tmp) dem++,cout<<tmp/i<<" ";
            if (dem==n) return 0;
        }
    }
}
