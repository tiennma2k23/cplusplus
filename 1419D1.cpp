#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e5+1;
long long a[maxn];
int main()
{
    long long i,n,l,r;
    cin>>n;
    cout<<(n-1)/2<<endl;
    for (i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    l=1;r=n;
    for (i=1;i<=n;i++)
    {
        if (i%2==0) cout<<a[l]<<" ",l++;
        else cout<<a[r]<<" ",r--;
    }
}
