#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,i,y;
    cin>>x>>y;
    for (i=1;i<=y;i++)
    {
        if (i%x==0) cout<<i<<endl;
        else cout<<i<<" ";
    }
}
