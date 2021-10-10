#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int k;
    long long vt=0,q,n,ans,i,tmp,val;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    vector<int> a(n);
    vector<long long>t(n+1);
    for (i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    long long sum=0;
    for (i=0;i<n;i++)
    {
        sum+=a[i];
        t[i+1]=sum;
    }
    cin>>q;
    val=0;
    while (q--)
    {
        cin>>k;
        val+=k;
        tmp=-val;
        vt=lower_bound(a.begin(),a.end(),tmp)-a.begin();
        ans=abs(t[vt]+vt*val)+(t[n]-t[vt]+(n-vt)*val);
        cout<<ans<<endl;
    }
}
