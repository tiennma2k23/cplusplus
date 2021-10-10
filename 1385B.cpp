#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll N=1e5;
long long dd[N];

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n,i,h;
        memset(dd,0,sizeof(dd));
        cin >> n;
        vector <int > show;
        for (i=1;i<=2*n;i++)
        {
            cin >> h;
            if (dd[h]==0) show.push_back(h);
            dd[h]=1;
        }
        for(i=0;i<show.size();i++) cout << show[i] << " ";
        cout << "\n";
    }
}
