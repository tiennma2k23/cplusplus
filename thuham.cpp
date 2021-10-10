#include<iostream>
check (int n)
{
    if (n%2==0) {return 1;}
    else return 0;
}
using namespace std;
int main()
{
int n;
cin>>n;
cout<<check(n);
}
