
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    int a[100];
    for (int i=1;i<=n;i++) cin>>a[i];
    int pos=upper_bound(a+1,a+1+n,4ll)-a;
    cout<<pos<<endl;
}
