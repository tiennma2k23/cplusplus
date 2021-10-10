#include<bits/stdc++.h>
using namespace std;
bool ok(int x,int b)
{
    for (int i=2;i*i<=x;i++)
    {
        if (x%i==0&&i<=b) return false;
    }
    return true;
}
int32_t main()
{
    int a,b;
    cin>>b>>a;
    for (int i=a;i>=b+1;i--)
        if (ok(i,b))
    {
        if (i*i<=a)
        {
            cout<<i*i<<endl;
            return 0;
        }
        cout<<i<<endl;
        return 0;
    }
    cout<<-1<<endl;
}
