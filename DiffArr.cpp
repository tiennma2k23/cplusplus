#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,a[100010],sl[100010],d=0;
    cin>>n;
    sl[0]=1;sl[-1]=1;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (sl[a[i]]==0&&a[i]>0)
        {
            d++;
            sl[a[i]]++;
        }
        else if (sl[a[i]+1]==0&&a[i]>0)
        {
            d++;
            sl[a[i]+1]++;
        }
        else if (sl[a[i]-1]==0&&a[i]>1)
        {
            d++;
            sl[a[i]-1]++;
        }
    }
    cout<<d<<endl;

}
