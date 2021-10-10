

#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
using namespace std;
bool ck;
int n,t,k;
bool add[200001];
set<II> st;

int _hash(int x, int y)
{
    return 1ll*((x*n+y-n)%n);
}

void solve(int le, int ri, int k)
{
    if (ck)
    {
        //ck=false;
        return;
    }

    if (le == ri)
    {
        if (!add[le]) cout << "! " << le << endl;
        add[le]=true;
        {
            ck=true;
            return;
        }
    }
    if (le == ri - 1)
    {
        if (k == 2)
        {
            if (!st.count(II(ri,ri)))cout << "? " << ri << " " << ri << endl;
            st.insert(II(ri,ri));
            int x;
            cin >> x;
            if (x == 0)
            {
                if (!add[ri]) cout << "! " << ri << endl;
                add[ri]=true;
                {
                    ck=true;
                    return;
                }
            }
        }
        else if (k == 1)
        {
            if (!st.count(II(le,le))) cout << "? " << le << " " << le << endl;
            st.insert(II(le,le));
            int x;
            cin >> x;
            if (x == 0)
            {
                if (!add[le]) cout << "! " << le << endl;
                add[le]=true;
                    ck=true;
                    return;
            }
            else
            {
                if (!st.count(II(ri,ri))) cout << "? " << ri << " " << ri << endl;
                st.insert(II(ri,ri));
                int x;
                cin >> x;
                if (x == 0)
                {
                    if (!add[ri]) cout << "! " << ri << endl;
                    add[ri]=true;
                    {
                        ck=true;
                        return;
                    }
                }
            }
        }
    }
    int mid = (le + ri) / 2;
    if (!st.count(II(le,mid))) cout << "? " << le << " " << mid << endl;
    st.insert(II(le,mid));
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
    ios_base::sync_with_stdio(false);
    cin >> n >> t;
    while (t--){
    //for (int i=1;i<=n;i++) add[i]=false;
    //st.clear();
    cin>>k;
    ck=false;
    solve(1, n, k);
    }
}
