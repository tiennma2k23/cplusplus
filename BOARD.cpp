#include<bits/stdc++.h>
using namespace std;
long long ans(long long a, long long n)
{
  long long tich=a,du=1,p=1e9+7;
  while (n>0)
  {
    if (n%2==1) du=du*tich%p;
    tich=tich*tich%p;
    n/=2;
  }
  return du;
}
int main()
{
    long long m,n;
    cin>>n>>m;
    long long k=(m-1)*(n-1),a=2;
    cout<<ans(a,k)<<endl;
}
