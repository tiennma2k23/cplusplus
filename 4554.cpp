#include<iostream>
using namespace std;
int main()
{
long long int n,t=0;
while (true)
{
    cin>>n;
    if (n==0) break;
    else t=t+n;
}
cout<<t<<endl;
}
