#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("b2.inp","r",stdin);
    freopen("b2.out","w",stdout);
    long long n;
    cin >> n;
    long long a[n+1][3];
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            cin >> a[i][j];
    for(int i=1;i<n;i++)
        for(int j=0;j<3;j++)
            a[i][j]=a[i][j]+min(a[i-1][0],a[i-2][1]);
    cout << min(a[n-1][0],min(a[n-2][1],a[n-3][2]));
    return 0;
}
