#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long max1,min1,n,i;
    cin>>n;
    min1=0;
    max1=0;
    for (i=1;i<=10000000;i++)
    {
        if (n>i)
        {
            n=n-i;
            min1=((max1+i)/i)*i;
            max1=min1+(i-1)*i;
        }
        else
        {
            min1=((max1+i)/i)*i;
            cout<<min1+(n-1)*i<<endl;
            break;
        }
    }
}
