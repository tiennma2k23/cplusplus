#include<iostream>
using namespace std;
int main()
{
    long int i,n,a[100000],j,d;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    i=1;
    while (i<=n)
    {
        d=0;
        for (j=i-1;j>=1;j--) if (a[j]<a[i]) d++;
        for (j=i+1;j<=n;j++) if (a[j]<a[i]) d++;
        cout<<d<<" ";
        i++;
    }

}
