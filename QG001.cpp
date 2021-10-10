#include<bits/stdc++.h>
using namespace std;
long long tichdu(long long a,long long p, long long n)
{
    long long tich=a,du=1,p1=p;
  while (p>0)
  {
    if (p%2==1) du=du*tich%n;
    tich=tich*tich%n;
    p/=2;
  }
  return du;
}
int main()
{
    long long t,a,b,m,k,tmp,t1,t2;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>m>>k;
        if (a==1) cout<<(b*k)%m<<endl;
        else{
        b=b%m;
        tmp=tichdu(a,k,m);
        t1=(b*tmp-b)%m;
        t2=(a-1)%m;
        cout<<(t1*/(a-1))%m<<endl;
        }
    }
}
