#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[10000],t=0,i;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    sort (a+1,a+1+n);
    for (i=2;i<=n;i++) t=t+a[i]-a[i-1];
    t=t+abs(a[1])+abs(a[n]);
    cout<<t<<endl;
}
