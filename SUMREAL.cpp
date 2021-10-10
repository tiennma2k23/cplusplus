#include<bits/stdc++.h>
using namespace std;
long long int tongbp(long long int n)
{
    unsigned long long int kq;
    kq=(n*(n+1)/2)%1000000007;
    kq=(kq*(2*n+1)/3)%1000000007;
    return kq;
}
int main()
{
    freopen("vao.inp","r",stdin);
    freopen("ra.out","w",stdout);
    unsigned long long int q,n1,n2;
    double a,b;
    cin>>q;
    while (q--)
    {
    cin>>a>>b;
    n1=trunc(b);
    if (trunc(a)<a) n2=trunc(a)+1; else n2=trunc(a);
    long long int ans=(tongbp(n1)-tongbp(n2-1))%1000000007;
    if (ans<0) ans+=1000000007;
    cout<<ans<<endl;
    }
}
