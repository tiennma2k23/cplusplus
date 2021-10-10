#include<bits/stdc++.h>
using namespace std;
int a[1000];
void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    if (a[1]<0)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<a[n]+1<<endl;
    for (int i=0;i<=a[n];i++) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
