#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b+c!=180) cout<<"Error";
    else if (a==b&&b==c) cout<<"Equilateral";
    else if (a==b||a==c||b==c) cout<<"Isosceles";
    else cout<<"Scalene";
}
