#include<bits/stdc++.h>
using namespace std;
int a[500005];
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    int l=1,r=n,ans;
    while (l<=r)
    {
        int mid=(l+r)/2;
        int pos=lower_bound(a+1,a+1+n,mid)-a;
        //cerr<<mid<<pos<<endl;
        int k=(n-pos+1);
        if (k>=mid) l=mid+1,ans=mid;
        else r=mid-1;
    }
    cout<<ans<<endl;
}
