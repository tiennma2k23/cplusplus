#include<bits/stdc++.h>
using namespace std;
int main()
{
unsigned long long int n,n1;
cin>>n;
if (n%2==0) {n1=n-1;}
else {n1=n;n=n-1;}
if (((n/2)*(n+2))/2>=(((n1+1)/2)*(n1+1))/2) cout<<((n/2)*(n+2))/2-(((n1+1)/2)*(n1+1))/2<<endl;
else cout<<"-"<<(((n1+1)/2)*(n1+1))/2-((n/2)*(n+2))/2<<endl;
}
