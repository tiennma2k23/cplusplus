#include<iostream>
#include<string>
using namespace std;
int main()
{
unsigned long long t,i,n,du;
cin>>t;
for (i=1;i<=t;i++)
{
    cin>>n;
    string s;
    while (n>0)
    {
        du=(n-1)%26;
        s=char (64+du)+s;
        n=(n-1)/26;
    }
    cout<<s<<endl;
}

}
