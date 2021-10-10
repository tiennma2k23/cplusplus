#include<bits/stdc++.h>
using namespace std;
bool comp(char a,char b)
{
    return a>b;
}
int main()
{
    char a[100000];
    int i,n,q,l,r,x,j;
    cin>>n>>q;
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=1;i<=q;i++)
    {
        cin>>l>>r>>x;
        if (x==0) sort(a+l,a+r+1,greater<char>());
        else if (x==1) sort(a+l,a+r+1);
    }
    for (i=1;i<=n;i++) cout<<a[i];
}
