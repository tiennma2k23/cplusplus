#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long t,j;
    cin>>t;
    for (j=1;j<=t;j++)
    {
        unsigned long long n;
        cin>>n;
        if (n==1) {cout<<n<<endl;}
        else
        {

        int i=2*(int)sqrt(n),dem=0;
        while ((i>=1) &&(dem==0))
        {
            if ((i*(i+1)/2)<n) {cout<<i<<endl;dem=dem+1;}
            i--;
        }
        }
    }
    }
