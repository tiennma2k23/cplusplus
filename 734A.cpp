#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,d=0,i;
char ch;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>ch;
    if (ch=='A') d++;
}
if (d*2>n) cout<<"Anton"<<endl;
else if (d*2<n) cout<<"Danik"<<endl;
else cout<<"Friendship"<<endl;
}
