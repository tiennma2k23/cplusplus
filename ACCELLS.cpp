#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n;
    freopen("ACCELLS.inp","r",stdin);
    freopen("ACCELLS.out","w",stdout);
    cin>>m>>n;
    cout<<m+n-(__gcd(n,m))<<endl;
}
