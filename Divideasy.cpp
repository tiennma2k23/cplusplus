#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,a,b,n;
    cin>>q;
    while (q--)
    {
        cin>>n>>a>>b;
        cout<<(n/a)+(n/b)-n/(a*b/(__gcd(a,b)))<<'\n';
    }
}
