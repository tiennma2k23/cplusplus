#include<bits/stdc++.h>
#define maxn 1000005
#define int long long
using namespace std;

int n ;
int a[maxn] ;
int bit1[maxn], bit2[maxn] ;
vector< int > v ;

void update2 (int i, int v)
{
    for (; i > 0 ; i -= i & -i) bit2[i] = max(bit2[i], v) ;
}

int get2 (int i)
{
    int tmp = -1 ;
    for (; i <= n ; i += i & -i) tmp = max(tmp, bit2[i]) ;
    return tmp ;
}

void update1 (int i, int v)
{
    for (; i <= n ; i += i & -i) bit1[i] = max(bit1[i], v) ;
}

int get1 (int i)
{
    int res = -1 ;
    for (; i > 0 ; i -= i & -i) res = max(res, bit1[i]) ;
    return res ;
}

void process()
{
    v.clear();
    cin >> n ;
    for (int i = 0 ; i <= n + 1 ; ++ i) bit2[i] = bit1[i] = -1 ;
    for (int i = 1 ; i <= n ; ++ i)
    {
        cin >> a[i] ;
        v.push_back(a[i]) ;
    }
    v.resize(unique(v.begin(), v.end()) - v.begin()) ;
    sort(v.begin(), v.end()) ;
    set< int > s ;
    for (int i = 1 ; i <= n ; ++ i)
    {
        a[i] = lower_bound(v.begin(), v.end(), a[i]) - v.begin() + 1 ;
        s.insert(a[i]) ;

        if (i > 1)
        {
            int _curr1, _curr2 ;

            auto _it = s.lower_bound(a[i]) ;
            if (_it == s.begin())
            {
                _curr1 = get1(a[i] - 1) ;
            }
            else
            {
                _it -- ;
                _curr1 = get1(*_it) ;
            }

            auto _it2 = s.upper_bound(a[i]) ;
            if (_it2 == s.end())
            {
                _curr2 = get2(a[i] + 1) ;
            }
            else
            {
                _curr2 = get2(*_it2) ;
            }

            if (_curr1 >= i - 1 || _curr2 >= i - 1)
            {
                cout << "no"<<endl ;
                return ;
            }
        }
        update1(a[i] + 1, i) ;
        update2(a[i] - 1, i) ;
        update1(a[i], i - 1) ;
        update2(a[i], i - 1) ;

    }
    cout << "yes"<<endl ;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q;
    cin>>q;
    while (q--) process();
}
