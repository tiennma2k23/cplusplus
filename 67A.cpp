#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll n)
{
        string res="989";
        for(int i=4;i<=n;i++)res+=char((i-4)%10+'0');
        for(int i=0;i<n;i++) cout<<res[i];
}
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n;
        cin>>n;
        solve(n);
        cout<<endl;
    }
}
