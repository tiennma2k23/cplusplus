#include<bits/stdc++.h>
#define int long long
#define sI pair<string,int>
#define se second
#define fi first
using namespace std;

const int maxn=1e6+5;

stack<int> s;
sI a[maxn];

bool ok(int i, int j){
    if (a[i].fi.substr(0,a[j].fi.size())==a[j].fi) return true;
    return false;
}
int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=2*n;i++)
    {
        cin>>a[i].fi;
        a[i].se=i;
    }
    sort(a+1,a+1+2*n); reverse(a+1,a+1+2*n);
    for (int i=1;i<=2*n;i++)
    {
        if (s.empty()) s.push(i);
        else
        {
            if (ok(s.top(),i))
            {
                cout<<a[i].se<<" "<<a[s.top()].se<<endl;
                s.pop();
            }
            else s.push(i);
        }
    }
}
