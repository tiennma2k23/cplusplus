#include <bits/stdc++.h>
using namespace std;

const int maxN = 100005;
const int maxA = 1000000;

int n, x, cnt, max_, min_;
vector<int> v[maxA + 5];
int Cnt[2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++ i) {
        cin >> x;
        for (int j = 2; j * j <= x; ++ j)
            if (x % j == 0) {
                cnt = 0;
                while (x % j == 0) x /= j, ++ cnt;
                v[j].push_back(cnt);
            }

        if (x > 1) v[x].push_back(1);
    }

    cnt = 0;
    for (int i = 2; i <= maxA; ++ i)
        if (v[i].size() > 0) {
            if (v[i].size() <= n - (n + 1) / 2) x = 0;
            else {
                sort(v[i].begin(), v[i].end());
                x = v[i][v[i].size() - n + (n + 1) / 2 - 1];
            }

            cnt += (n - v[i].size()) * x;
            for (int j = 0; j < v[i].size(); ++ j)
                cnt += abs(v[i][j] - x);
        }

    cout << cnt;

    return 0;
}
