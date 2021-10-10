#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,i,n,j,d=0;
    cin>>t;
    for (n=2;n<=t;n++)
    {

       if(n==2){d++;
                //cout<<"YES"<<endl;
                }
        else
            {
            int dem=0;
        j=2;
        while((j<=sqrt(n)) and (dem==0))
        {
            if (n%j==0) {dem=dem+1;}
            j++;
        }
        if (dem==0) {d++;}
        }
    }
    cout<<d<<endl;
}
