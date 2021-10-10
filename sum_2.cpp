#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e9+7,N=1e5;
int main()
{
    long long n,q,p,max1=-MAXN;
    freopen("scramble.inp","r",stdin);
    freopen("scramble.out","w",stdout);
    cin>>n;
    while (n--)
    {
        cin>>p;
        if (p<=N) max1=max(max1,p);
    }
    cout<<max1<<endl;
}
