#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,d=0;
cin>>a>>b;
while (a<=b)
{
    d++;
    a=a*3;b=b*2;
}
cout<<d<<endl;
}
