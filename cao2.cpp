#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
long int A[100000],B[100000],k,i,n,kq[100000],gn[100000],d,cnt;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>A[i];
    B[i]=A[i];
}
sort (B,B+n);
for (i=1;i<=n;i++)
{
long int l=1,r=n,giua,X=A[i];
while ((B[r]>=X)&&(l<r))
{
    giua=(l+r)/2;
    if (B[giua]>=X) r=giua;
    else l=giua+1;
}
cout<<r-1<<" ";
}
//for (i=1;i<=n;i++) cout<<kq[i]<<" ";
}
