#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;

void solve()
{
    int n,t,k;
    cin >> n >> t >> k ;
    int l = 1, r = n, sum ;
    while (l <= r)
    {
        int mid = (l + r) / 2 ;
        cout.flush() << "? 1 " << mid << endl ;
        cin >> sum ;
        fflush(stdout) ;
        if (mid - sum == k)
        {
            cout.flush() << "! " << mid << endl ;
            exit(0) ;
        }
        else if (mid - sum > k) r = mid - 1 ;
        else l = mid + 1 ;
    }

}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
