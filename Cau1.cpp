#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,l,tmp,a[10];
    bool ck=true;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if (i*i<=n&&ck)
        {
             for (j=i;j<=n;j++)
                {
                    if (j*j+i*i<=n&&ck)
                    {
                        for (k=j;k<=n;k++)
                        {
                            if (i*i+j*j+k*k<=n&&ck)
                            {
                                tmp=n-i*i-j*j-k*k;
                                if (tmp!=0){
                                l=sqrt(tmp);
                                if (l*l==tmp)
                                {
                                    a[1]=i;a[2]=j;a[3]=k;a[4]=l;
                                    sort (a+1,a+5);
                                    cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
                                    ck=false;
                                    return 0;
                                }
                                }
                            }
                            else break;
                        }
                    }
                    else break;
                }
        }
        else break;
    }
    cout<<-1<<endl;
}
