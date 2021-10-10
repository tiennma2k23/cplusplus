#include<iostream>
#include<cmath>
using namespace std;
int lt(long long a, long long p)
{
    long long tich=a,du=1,p1=p;
  while (p>0)
  {
    if (p%2==1) du=du*tich%1000000007;
    tich=tich*tich%1000000007;
    p/=2;
  }
  return du;
}
int main()
{
    long long n,k;
    long long c=1000000007;
    cin >>n>>k;
    n=n-k+1;
    long long tu=1,mau=1;
    for (int i=n; i>=n-k+1;i--)
        tu=(tu*i)%c;
    for (int i=1; i<=k; i++)
        mau=(mau*i)%c;
    cout <<(tu*lt(mau,c-2))%c<<endl;
}
