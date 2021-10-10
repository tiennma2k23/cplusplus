#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b)
{
    return a*b/__gcd(a,b);
}
int main()
{
    long long q,a,b,c,tmp,n;
    cin>>q;
    while (q--)
    {
        cin>>n>>a>>b>>c;
        tmp=lcm(lcm(a,b),lcm(b,c));
        cout<<n/a+n/b+n/c-n/lcm(a,b)-n/lcm(b,c)-n/lcm(a,c)+n/tmp<<endl;
    }
}
