#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    int ans=0;
    cin>>n>>p;
    for (int i=1;i<=n;i++)
    {
        if (__gcd(i,n)==p) ans++;
    }
    cout<<ans<<endl;
}
