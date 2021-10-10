#include<iostream>
using namespace std;
int main()
{
long long int n,m,a[100000],dgn=0,d1=0,d2=0,i,l1,l2,r1,r2,t1,t2,diem1=0,diem2=0;
    cin>>n>>m;
    cin>>l1>>r1;cin>>l2>>r2;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (((a[i]>=l1)&&(a[i]<=r1)) && ((a[i]>=l2)&&(a[i]<=r2))) dgn++;
        else if ((a[i]>=l1)&&(a[i]<=r1)) d1++;
        else if ((a[i]>=l2)&&(a[i]<=r2)) d2++;
    }
    t2=dgn/2;t1=dgn-t2;
    d1+=t1;d2+=t2;
    d2=min(d2,m/2);d1=min(d1,m-m/2);
    if (d1==d2) cout<<"Draw"<<endl;
    else if(d1>d2) cout<<"Petya"<<endl;
    else cout<<"Vasya"<<endl;
}
