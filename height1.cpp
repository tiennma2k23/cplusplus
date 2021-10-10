#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,a[100100],b[100100],vt;
    ios_base::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];b[i]=a[i];
    }
    sort(b+1,b+1+n);
    for (i=1;i<=n;i++)
    {
        vt=lower_bound(b+1,b+1+n,a[i])-b;
        cout<<vt-1<<" ";
    }
}
