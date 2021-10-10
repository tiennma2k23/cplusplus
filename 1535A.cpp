#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a[10];
    for (int i=1;i<=4;i++) cin>>a[i];
    int  a1=max(a[1],a[2]);
    int a2=max(a[3],a[4]);
    sort(a+1,a+1+4);
    if (min(a1,a2)==a[3]&&max(a1,a2)==a[4]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
