#include<bits/stdc++.h>
#define int long long
using namespace std;
unsigned int x=1,d=0,i,j,k,t,n,n1;
unsigned int a[100000];

void create()
{
    for (i=1; i<=70; i++)
    {
        long long y=1;
        for (j=1; j<=70; j++)
        {
            long long z=1;
            for (k=1; k<=70; k++)
            {
                d++;
                a[d]=x*y*z;
                if (x*y*z*5<=1000000000000000000)
                {
                    z=z*5;
                }
                else break;
            }
            if (x*y*3<1000000000000000000)
            {
                y=y*3;
            }
            else break;
        }
        if (x*2<1000000000000000000)
        {
            x=x*2;
        }
        else break;
    }
}

int32_t main()
{
    create();
    sort(a+1,a+1+d);
    cin>>n;
    cout<<a[n+1]<<endl;

}
