#include<bits/stdc++.h>
using namespace std;
long long t=0,d1[1000000],d2[1000000],a,i,n;
int main()
{
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        if (a<0) d1[abs(a)]++;
        else d2[a]++;
    }
    for (i=1;i<=1000000;i++) t+=d1[i]*d2[i];
    t+=d2[0]*(d2[0]-1)/2;
    cout<<t<<endl;
}
