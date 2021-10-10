#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,dem=0,j;
    cin>>n;
    long long a[n+10];
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++) if (a[i]>a[j]*2) dem++;
    cout<<dem<<endl;
}
