#include<bits/stdc++.h>
using namespace std;

int n,m;
char ch[100][100],a[100][100];
bool ck()
{
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
    {
        if (ch[i][j]!='.'&&ch[i][j]!=a[i][j]) return false;
    }
    return true;
}


void solve()
{
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++) cin>>ch[i][j];
    for (int i=1;i<=n;i++){
        if (i%2==1)
    {
        for (int j=1;j<=m;j++)
        {
            if (j%2==1) a[i][j]='R';
            else a[i][j]='W';
        }
    }
    else
    {
        for (int j=1;j<=m;j++)
        {
            if (j%2==1) a[i][j]='W';
            else a[i][j]='R';
        }
    }
    }
    bool kt1=ck();
    if (kt1)
    {
        cout<<"YES"<<endl;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=m;j++) cout<<a[i][j];
            cout<<endl;
        }
        return;
    }
    for (int i=1;i<=n;i++){
        if (i%2==0)
    {
        for (int j=1;j<=m;j++)
        {
            if (j%2==1) a[i][j]='R';
            else a[i][j]='W';
        }
    }
    else
    {
        for (int j=1;j<=m;j++)
        {
            if (j%2==1) a[i][j]='W';
            else a[i][j]='R';
        }
    }
    }
    bool kt2=ck();
    if (kt2)
    {
        cout<<"YES"<<endl;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=m;j++) cout<<a[i][j];
            cout<<endl;
        }
        return;
    }
    cout<<"NO"<<endl;
}

int main()
{
int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
