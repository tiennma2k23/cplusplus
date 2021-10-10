#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,a[100100];
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    sort (a+1,a+1+n);
    for (i=n;i>=1;i--) cout<<a[i]<<" ";
}
