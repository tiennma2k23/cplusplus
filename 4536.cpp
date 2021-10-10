#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,c;
cin>>a>>b>>c;
if ((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)) cout<<"VUONG"<<endl;
else if ((a==b)&&(b==c)) cout<<"DEU"<<endl;
else if (a==b||b==c||c==a) cout<<"CAN"<<endl;
else cout<<"THUONG"<<endl;
}
