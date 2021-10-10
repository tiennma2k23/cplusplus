#include <bits/stdc++.h>
using namespace std;

#define ii pair<int, int>

int cnt;
set<ii> q;
vector< pair<ii, ii> > v;

int main()
{
    for (int i = 0; i < 5; ++ i) {
        int x;
        cin >> x;
        q.insert({x, i + 1});
    }
    while (q.size() > 1) {
        set<ii>::iterator it = q.begin();
        ii x = *it;
        q.erase(it ++);
        ii y = *(it ++);
        ii z = *it;
        cnt += x.first;
        v.push_back({{x.second, y.second}, {z.second, x.first}});
        q.insert({z.first + x.first, z.second});
    }

    cout << cnt << "\n";
    for (int i = 0; i < v.size(); ++ i) {
        for (int j = 0; j < v[i].second.second; ++ j) {
            cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second.first << "\n";
        }
    }
}
