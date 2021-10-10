#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
  	ios_base::sync_with_stdio(false);
  	cin.tie(nullptr);
  	cout.tie(nullptr);
    int n;
    cin>>n;
    vector <int> a(n+1);
    vector<vector<int>> f(n+1, vector<int>(n+1, 0));
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i = 0; i < n; i++) {
        f[i][i] = 0;
    }
    for ( int len=1;len<=n;len++)
        for (int i=0;i+len<=n;i++)
    {
        int j=len+i;
        if ((n-len)%2==0) f[i][j]=max(f[i+1][j]+a[i],f[i][j-1]+a[j-1]);
        else f[i][j]=min(f[i+1][j]-a[i],f[i][j-1]-a[j-1]);
    }
    cout<<f[0][n]<<endl;
}
