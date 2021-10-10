#include<iostream>
using namespace std;
long long int tongbp(long long int n)
{
    unsigned long long int kq,k,k1;
    k=n+1;k1=n*2+1;
    if (n%2==1) k=k/2; else n=n/2;
    if (n%3==0) n=n/3;
    else if (k%3==0) k=k/3;
    else k1=k1/3;
    kq=(n*k)%1000000007;
    kq=(kq*k1)%10000000007;
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
    n1=(long long int) (b);
    if ((long long int)(a)<a) n2=(long long int)(a)+1; else n2=(long long int)(a);
    long long int ans=(tongbp(n1)-tongbp(n2-1)+1000000007)%1000000007;
    cout<<ans<<endl;
    }
}
