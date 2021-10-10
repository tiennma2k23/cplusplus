#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1;
int a[maxn];
void solve(int i, int j)
{
    cout<<1<<" "<<i<<" "<<j<<endl;
    cout<<1<<" "<<i<<" "<<j<<endl;
    cout<<2<<" "<<i<<" "<<j<<endl;
    cout<<1<<" "<<i<<" "<<j<<endl;
    cout<<1<<" "<<i<<" "<<j<<endl;
    cout<<2<<" "<<i<<" "<<j<<endl;
}

int32_t main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        for (int i=1; i<=n; i++) cin >> a[i];
        cout << 3 * n << endl;
        for (int i = 1; i <= n; i += 2)
        {
            solve(i, i + 1);
        }
    }

}
