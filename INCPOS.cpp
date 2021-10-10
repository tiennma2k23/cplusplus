#include<bits/stdc++.h>
using namespace std;
long long int d=0,r,l,x,n,q,a[200100],hieu[200100],i,k;
int main()
{
    cin>>n>>q;
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=1;i<n;i++)
    {
        hieu[i]=a[i]-a[i+1];
        if (hieu[i]>0) d++;
    }
    for (i=1;i<=q;i++)
    {
        cin>>l>>r>>x;;
        if (l>1)
        {
            k=hieu[l-1];
            hieu[l-1]-=x;
            if (k<=0&&hieu[l-1]>0) d++;
            else if(k>0&&hieu[l-1]<=0) d--;
        }
        if (r<n)
        {
            k=hieu[r];
            hieu[r]+=x;
            if (k<=0&&hieu[r]>0) d++;
            else if(k>0&&hieu[r]<=0) d--;
        }
        cout<<d<<endl;
    }
}
