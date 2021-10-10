#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i;
    for (i=1000;i<=9999;i++)
    {
        if (i+i/10+i/100+i/1000==2239) cout<<i<<endl;
    }
}
