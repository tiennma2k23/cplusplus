#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[1000];
int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
    {
        int tmp=a[i]^a[j];
        cout<<tmp<<" ";
    }
    cout<<endl;
    }
}
