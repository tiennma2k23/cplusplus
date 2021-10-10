#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if (n<26)
    {
        for (int i=0;i<n;i++)
        {
            char ch=i+'a';
            cout<<ch;
        }
        cout<<endl;
        return;
    }
    int tmp=n/2;
    for (int i=1;i<=tmp;i++) cout<<'c';
    if (n%2==1) cout<<"ab";
    else cout<<'a';
    for (int i=1;i<tmp;i++) cout<<'c';
    cout<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
