#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    unsigned long long x=1,d=0,i,j,k,t,n,n1;unsigned long long A[10000000];
    for (i=1;i<=70;i++)
    {
        long long y=1;
        for (j=1;j<=70;j++)
        {
            long long z=1;
            for (k=1;k<=70;k++)
            {
                d++;
                A[d]=x*y*z;
                if (x*y*z*5<=1000000000000000000) {z=z*5;}
                else break;
            }
            if (x*y*3<1000000000000000000) {y=y*3;}
            else break;
        }
        if (x*2<1000000000000000000) {x=x*2;}
        else break;
    }
    sort(A + 1, A + d + 1);
    cin>>t;
    while (t--)
    {
        cin>>n;
        n1=n;
        while(n1 % 2 == 0) n1 /= 2;
        while(n1 % 3 == 0) n1 /= 3;
        while(n1 % 5 == 0) n1 /= 5;
        if (n1!=1) {cout<<"Not in sequence"<<endl;}
        else
        {
           int l=1,r=d,giua;
           while (A[r]>n)
           {
               giua=(l+r)/2;
               if (A[giua]>=n) r=giua;
               else l=giua+1;
           }
           cout<<r<<endl;
        }
    }

}
