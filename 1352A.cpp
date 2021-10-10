#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ans[100],n,q,d,tmp,k,i;
    cin>>q;
    while (q--)
    {
        cin>>n;
        d=0;
        k=1;
        while (n>0)
        {
            tmp=n%10;
            if (tmp!=0)
            {
                d++;
                ans[d]=tmp*k;
            }
            k=k*10;
            n=n/10;
        }
        cout<<d<<endl;
        for (i=1;i<=d;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}
