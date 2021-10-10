#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n,j,d=0,i;int t[10000000];
    for (j=1;j<=t;j++)
    {
        cin>>n;
        int i=sqrt(2*n),dem=0;
        while ((i>=1) &&(dem==0))
        {
            if ((i*(i+1)/2)<n) {d=d+1;t[d]=i;dem=dem+1;}
            i--;
        }
    }
    for (i=1;i<=d;i++) cout<<t[i]<<endl;
    }

