#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,d,i;
cin>>n;
d=0;
for (i=1;i<=sqrt(n);i++)
{
    if (n%i==0)
    {
        if (n/i!=i) d=d+2;
        else d++;
    }
}
cout<<d<<endl;
}
