#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long int n,a[100000],b[100000],tt[100000],d[100000],k;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];b[i]=a[i];tt[a[i]]=0;d[a[i]]=0;
    }
    sort(a,a+n);
    for (int i=1;i<=n;i++)
    {
        tt[a[i]]=i;
        d[a[i]]=d[a[i]]+1;
    }
    for (int i=1;i<=n;i++)
    {
        k=tt[b[i]]-d[b[i]]-1;
        if (k<0) {k=0;}
        cout<<k<<" ";
    }
}
