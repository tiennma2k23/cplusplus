#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e4+1;

string _max(string a,string b)
{
    while (a[0]=='0'&&a.length()>1) a.erase(0,1);
    while (b[0]=='0'&&b.length()>1) b.erase(0,1);
    if (a.length()<b.length()) swap(a,b);
    else if (a.length()==b.length())
    {
        a=max(a,b);
    }
    return a;
}

string lcs(string a, string b)
{
    ll m = a.size(), n = b.size();
    vector< vector<string> > f(m+1, vector<string>(n+1, ""));
    a = ' ' + a;
    b = ' ' +b;
    for (ll i=1; i<=m; i++) for (ll j=1; j<=n; j++)
        {
            if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + a[i];
            else f[i][j] = _max(f[i-1][j], f[i][j-1]);
        }
    return f[m][n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a,b;
    cin>>a>>b;
    cout<<lcs(a,b)<<endl;
}
