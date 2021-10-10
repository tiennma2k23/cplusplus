#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+1;
int a[maxn],_and[maxn],sum[maxn],_or[maxn];
int32_t main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1; i<n; i++)
    {
        cout<<"and "<<i<<" "<<i+1<<endl;
        cin>>_and[i];
        cout<<"or "<<i<<" "<<i+1<<endl;
        cin>>_or[i];
        sum[i]=_and[i]+_or[i];
    }
    cout<<"and "<<1<<" "<<3<<endl;
    int _and13,_or13;
    cin>>_and13;
    cout<<"or "<<1<<" "<<3<<endl;
    cin>>_or13;
    int l=_and13+_or13;
    int r=sum[1]-sum[2];
    a[1]=(l+r)/2;
    for(int i=2; i<=n; i++) a[i]=sum[i-1]-a[i-1];
    sort(a+1,a+1+n);
    cout<<"finish"<<" "<<a[k]<<endl;
}
