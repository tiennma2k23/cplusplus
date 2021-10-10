#include<bits/stdc++.h>
using namespace std;
int main()
{
  	ios_base::sync_with_stdio(false);
  	cin.tie(nullptr);
  	cout.tie(nullptr);
    long long i,j,n,len;
    cin>>n;
    vector <long long> a(n+1);
    vector<vector<long long>> f(n+1, vector<long long>(n+1, 0));
    for (i=0;i<n;i++) cin>>a[i];
    for (i = 0; i < n; i++) {
        f[i][i] = 0;
    }
    for (len=1;len<=n;len++)
        for (i=0;i+len<=n;i++)
    {
        j=len+i;
        if ((n-len)%2==0) f[i][j]=max(f[i+1][j]+a[i],f[i][j-1]+a[j-1]);
        else f[i][j]=min(f[i+1][j]-a[i],f[i][j-1]-a[j-1]);
    }
    cout<<f[0][n]<<endl;

}
