#include<bits/stdc++.h>
using namespace std;
const long long maxn=2e5+10;
long long a[maxn],n;
void replace_n()
{
    long long d=*max_element(a+1,a+1+n),i;
    for (i=1;i<=n;i++) a[i]=d-a[i];
}
int main()
{
    long long i,k,q;
    cin>>q;
    while (q--)
    {
        cin>>n>>k;
        for (i=1;i<=n;i++) cin>>a[i];
        k=k%2;
        if (k==0) k=2;
        while (k--) replace_n();
        for (i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}
