#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=5e4+10;
ll sum[MAXN],ans=0,i,m,n,a[MAXN];
int main() {
     //freopen("bdnties.inp","r",stdin);
     //freopen("bdnties.out","w",stdout);
    cin>>n>>m;
    for(i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+1+n);
    for(i=1;i<=n;i++){
        sum[i%m]+=a[i];
        ans+=sum[i%m];
    }
    cout << ans << endl;
}
