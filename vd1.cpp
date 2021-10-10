#include<stdio.h>
#include<stdlib.h>
#include<iostream>
void qsort(int *a,int l,int r)
{
    if (l <= r)
    {
int b[100000];
int tg=a[(l+r)/2];
int i=l,j=r;
while(i<=j)
{
    while (a[i]<tg) i++;
    while (a[j]>tg) j--;
    if (i<=j)
    {
        tg=a[i];a[i]=a[j];a[j]=tg;
        tg=b[i];b[i]=b[j];b[j]=tg;
        i++;j--;
    }

}
if (l<j) qsort(a,l,j);
if (i<r) qsort(a,i,r);
}
}
using namespace std;
int main()
{
    int a[100000],b[100000],i,n,k;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i]>>b[i];
    cin>>k;
    qsort(a,0,n-1);
    for (i=1;i<=n;i++) cout<<a[i]<<" "<<b[i]<<endl;
}
