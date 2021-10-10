#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200001];
void solve()
{
    int n;
    cin>>n ;
    int pos=1 ;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i] ;
        if(a[i]<a[pos]) pos=i ;
    }
    if (n==1)
    {
        cout << 0<<endl;
        return;
    }
    cout<<n-1<<endl ;
    for (int i=1; i<=n; i++)
    {
        if (i==pos) continue ;
        cout<<i<<" "<<pos<<" "<<a[pos]+abs(i-pos)%2<<" "<<a[pos]<<endl;
    }
}
int32_t main()
{
    int q;
    cin>>q;
    while (q -- )
    {
        solve();
    }

}
