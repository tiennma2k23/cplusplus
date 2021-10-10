#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long q,n,a[200010],ans,i;
    cin>>q;
    while (q--){
            ans=0;
            cin>>n;
            for (i=1;i<=n;i++) cin>>a[i];
            for (i=n;i>1;i--) if (a[i]<a[i-1]) ans+=a[i-1]-a[i];
            cout<<ans<<endl;
    }
}
