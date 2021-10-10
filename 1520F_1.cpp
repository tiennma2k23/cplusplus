#include<bits/stdc++.h>

#define int long long
using namespace std ;




int32_t main()
{
    int t, n, k ;
    cin >> n >> t >> k ;
    int l = 1, r = n, sum ;
    while (l != r)
    {
        int mid = (l + r + 1) / 2 ;
        cout.flush() << "? 1 " << mid << endl ;
        cin >> sum ;
        if (mid - sum > k) r = mid - 1 ;
        else l = mid ;
    }
    cout.flush() << "! " << l << endl ;

    return 0;
}
