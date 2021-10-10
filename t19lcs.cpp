#include<bits/stdc++.h>
#define int long long
using namespace std;

int lcs(char *a, char *b) {
    int m = a.size(), n = b.size();
    a = ' ' + a;
    b = ' ' + b;
    vector< vector<int> > f(m+1, vector<int>(n+1, 0));

    for (int i=1; i<=m; i++) for (int j=1; j<=n; j++) {
        if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
        else f[i][j] = max(f[i-1][j], f[i][j-1]);
    }
    return f[m][n];
}
const int maxn=5e3+1;
char x[maxn],y[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q;
    scanf("%ld",&q);
    while (q--)
    {
        scanf("%s %s",x,y);
        cout<<lcs(x,y)<<'\n';
    }
}
