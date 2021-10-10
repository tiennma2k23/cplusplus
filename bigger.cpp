#include<iostream>
using namespace std;
int main()
{
int a[1000001],b[1000001];
int t,i;
cin>>t;
for(i=1;i<=t;i++)
    {
        cin>>a[i];cin>>b[i];
        while (a[i]!=b[i])
        {
            if (a[i]>b[i]) {a[i]=a[i]-b[i];}
            else {b[i]=b[i]-a[i];}
        }
        int ucln=a[i];
        if (ucln%2==1) {cout<<"odd"<<endl;} else {cout<<"even"<<endl;}
    }
}
