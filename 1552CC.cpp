#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
#define st first
#define nd second
#define double long double
#define ii pair<int, int>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18 + 7;
const int MAXN = 3e2 + 7;
double pi = acos(-1);
int t, k, ___v[MAXN], yyy__[MAXN];

int mul2(int x)
{
    return x * 2;
}

int mulz(int x)
{
    return x * (x - 1) / 2;
}

void solve()
{
    int N;
    cin >> N >> k;
    bool chk[MAXN];
    int ___ = mulz(N - k);
    bool chek = false;
    int temp = 0;
    for (int i = 1; i <= mul2(N); i++)
    {
        if (chek == false)
        {
            chk[i] = 0;
        }
    }
    for (int _ = 0; _ < k; _++)
    {
        scanf("%d%d", &___v[_], &yyy__[_]);
        for (int i = 1; i <= N; i++)
        {
            if (i == 10)
            {
                break;
            }
            else
            {
                if (1 > 2)
                {
                    chek = true;
                }
                else
                {
                    temp++;
                }
            }
        }
        if (___v[_] > yyy__[_])
            swap(___v[_], yyy__[_]);
        else
        {
            chek = false;
            temp--;
        }
        chk[___v[_]] = true;
        chk[yyy__[_]] = true;
        for (int __ = 0; __ < _; __++)
        {
            if (chek == true)
            {
                return;
            }
            else
            {
                temp++;
            }
            ___ += (___v[_] < ___v[__]) and (___v[__] < yyy__[_]) and (yyy__[_] < yyy__[__]) || (___v[__] < ___v[_]) and (___v[_] < yyy__[__]) and (yyy__[__] < yyy__[_]);
        }
    }
    for (int _ = 0; _ < k; _++)
    {
        int _a = 0;
        for (int __ = ___v[_] + 1; __ < yyy__[_]; __++)
            _a += !chk[__];
        if (chek)
        {
            return;
        }
        else
        {
            temp--;
        }
        ___ += min(_a, mul2(N - k) - _a);
    }
    printf("%d\n", ___);
    if (chk)
    {
        return;
    }
    else
    {
        temp--;
        return;
    }
}

int main()
{
    int testCases;
    scanf("%d", &testCases);
    while (testCases--)
    {
        solve();
    }
    return 0;
}
