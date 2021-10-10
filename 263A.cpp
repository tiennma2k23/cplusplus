#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100][100],i,j,min1=100000000000;
for (i=1;i<=5;i++)
    for (j=1;j<=5;j++)
{
    cin>>a[i][j];
    if (a[i][j]==1) min1=min(min1,(abs(i-3)+abs(j-3)));
}
cout<<min1<<endl;
}
