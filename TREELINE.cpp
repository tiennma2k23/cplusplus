#include<bits/stdc++.h>
bool check(long int a[100000],long int n)
{
    long int d=0,i;
    for (i=1;i<=n-1;i++) {
            if(a[i]>=a[i+1]) return false;
    }
    return true;
}
using namespace std;
int main()
{
freopen("TREELINE.inp","r",stdin);
freopen("TREELINE.out","w",stdout);
long int n,i,a[100000],dem=0,b[100000];
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>a[i];
}
while (check(a,n)==false)
{
    dem++;int d=0;
    for (i=1;i<=n;i++) if (a[i]>a[i-1]) {d++;b[d]=a[i];}
    n=d;
    for (i=1;i<=n;i++) a[i]=b[i];
}
cout<<dem<<endl;
}
