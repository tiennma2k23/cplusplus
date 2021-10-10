#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,min1=1e9,max1=-1e9,a;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        min1=min(min1,a);
        max1=max(max1,a-min1);
    }
    cout<<max1<<endl;
}
