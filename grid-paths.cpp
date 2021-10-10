#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;

int f[1001][1001];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    f[0][0]=1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        for(int j=0; j<n; j++)
        {
            if(s[j]=='*') f[i][j]=0;
            else
            {
                if(i>0) f[i][j]+=f[i-1][j];
                if(j>0) f[i][j]+=f[i][j-1];
                f[i][j]%=mod;
            }
        }

    }
    cout<<f[n - 1][n - 1]<<endl;

}
