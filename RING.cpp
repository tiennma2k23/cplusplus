#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a[100000],dgn=0,d1=0,d2=0,i,l1,l2,r1,r2,t1,t2;
    cin>>n>>m;
    cin>>l1>>r1;cin>>l2>>r2;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (((a[i]>=l1)&&(a[i]<=r1)) && ((a[i]>=l2)&&(a[i]<=r2))) dgn++;
        else if ((a[i]>=l1)&&(a[i]<=r1)) d1++;
        else if ((a[i]>=l2)&&(a[i]<=r2)) d2++;
    }
    //cout<<dgn<<" "<<d1<<" "<<d2<<endl;
    if (m<=dgn)
    {
        if (m%2==0) cout<<"Draw"<<endl;
        else cout<<"Petya"<<endl;
    }
    else
    {
        if (dgn%2!=0) {dgn+=1;d2--;}
        m=m-dgn;
        //if (k<=d1+d2)
        //{
            t2=m/2;
            t1=m-t2;
            if (t1<d1&&t2>=d2) cout<<"Vasya"<<endl;
            else if (t1>=d1&&t2<d2) cout<<"Petya"<<endl;
            else if (t1>=d1&&t2>=d2)
            {
                if (d1==d2) cout<<"Draw"<<endl;
                else if (d1>d2) cout<<"Petya"<<endl;
                else cout<<"Vasya"<<endl;
            }
            else if (t1<d1&&t2<d2)
            {
                if (t1==t2) cout<<"Draw"<<endl;
                else if (t1>t2) cout<<"Petya"<<endl;
                else cout<<"Vasya"<<endl;
            }
        //}

    }
}
