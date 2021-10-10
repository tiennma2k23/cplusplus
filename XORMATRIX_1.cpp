#include <bits/stdc++.h>
using namespace std;
int a[1009],b[1009],f[1009][1009];
int main(){
    freopen("XORMATRIX.inp","r",stdin);
    freopen("XORMATRIX.ans","w",stdout);
    int n,m;
    cin >> n >> m;
    int x = 0;
    int y = 0;
    for (int i = 1;i <= n; i++){
        cin >> a[i];
        f[i][m] = a[i];
        x = x ^ a[i];
    }
    for (int i = 1;i <= m; i++){
        cin >> b[i];
        f[n][i] = b[i];
        y = y ^ b[i];
    }
    if (x != y){
        cout << "NO"<<endl;
    } else {
        x = x ^ a[n] ^ b[m];
        cout<< "YES" << endl;
        f[n][m] = x;
        for (int i = 1; i<=n ;i++){
            for (int j=1;j<=m;j++){
                cout<<f[i][j]<< " ";
            }
            cout<<endl;
        }
    }
}
