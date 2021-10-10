
#include<bits/stdc++.h>
#define int long long
using namespace std;
bool ck;

void solve(int le, int ri, int k)
{
    if (ck) return;
    if (le == ri)
    {
        cout << "! " << le << endl;
        {
            ck=true;
            return;
        }
    }
    if (le == ri - 1)
    {
        if (k == 2)
        {
            cout << "? " << ri << " " << ri << endl;
            int x;
            cin >> x;
            if (x == 0)
            {
                cout << "! " << ri << endl;
                {
                    ck=true;
                    return;
                }
            }
        }
        else if (k == 1)
        {
            cout << "? " << le << " " << le << endl;
            int x;
            cin >> x;
            if (x == 0)
            {
                cout << "! " << le << endl;
                {
                    ck=true;
                    return;
                }
            }
            else
            {
                cout << "? " << ri << " " << ri << endl;
                int x;
                cin >> x;
                if (x == 0)
                {
                    cout << "! " << ri << endl;
                    {
                        ck=true;
                        return;
                    }
                }
            }
        }
    }
    int mid = (le + ri) / 2;
    cout << "? " << le << " " << mid << endl;
    while (!ck)
    {
        int x;
        cin >> x;
        int _nk = (mid - le + 1) - x;
        if (_nk >= k) solve(le, mid, k);
        else
        {
            _nk = k - _nk;
            solve(mid + 1, ri, _nk);
        }
    }
}

int32_t main()
{
    int n,t,k;
    cin >> n >> t>>k;
    solve(1, n, k);
}
