
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << r / 9 - (l - 1) / 9 << endl;
    }
}
