#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j;
    cin>>a>>b;
    for (i=1;i<=a-b;i++)
    {
        for (j=1;j<=a;j++) cout<<"*"<<" ";
        cout<<endl;
    }
    for (i=1;i<=b;i++)
    {
        for (j=1;j<=a-b;j++) cout<<"*"<<" ";
        cout<<endl;
    }
}
