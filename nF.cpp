#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d=0,i;
    cin>>a>>b>>c;
    for (i=a;i<=b;i++) if (i%c==0) d++;
    cout<<d<<endl;
}
