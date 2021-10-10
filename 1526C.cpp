#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        if (n % 11 == 0) cout << "YES"<<endl ;
        else
        {
            int tmp = n % 11 ;
            n /= 11 ;
            cout << (tmp * 10 <= n ? "YES" : "NO") << endl ;
        }
    }
}
