#include<bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7;
unsigned long long sum(long long n)
{
    return (n*(n+1)/2);
}
unsigned long long sumab(long long a, long long b)
{
    return (sum(b)-sum(a))%MOD;
}
void solve(long long n)
{
    long long ans=0;
    long long i=1;
    while (true)
    {
        ans=(ans+(unsigned long long )((sumab(n/(i+1),n/i))*(i%MOD))%MOD)%MOD;
        if (i==n) break;
        i=n/(n/(i+1));
    }
    cout<<ans<<'\n';
}
int main()
{
    long long n;
    cin>>n;
    solve(n);
}
