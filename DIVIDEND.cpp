#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long d[10];
        map<long long,long long> b;
        memset(d,0,10);
        bool kt=false;
        long long dem=0,top,k,tmp,t=0;
        long long q,n,a[100],i,ans;
        cin>>q>>n;
        for (i=1;i<=q;i++)
        {
            cin>>a[i];
            d[a[i]]++;
            t=t+a[i];
        }
        sort(a+1,a+1+q);
        bool kt1=false;
        for (i=1;i<=q;i++)
        {
            if (a[i]!=a[i-1]) dem++,b[dem]=a[i];
            if(a[i]%n==0) {cout<<a[i]<<endl;kt1=true;break;}
        }
        if(!kt1){
        k=dem;
        top=1;
        while (b[top]<=1e9)
        {
            tmp=b[top];
            for (i=1;i<=k;i++)
            {
                dem++;
                b[dem]=tmp*10+b[i];
                if (b[dem]%n==0)
                {
                    ans=b[dem];
                    kt=true;
                    break;
                }
            }
            if (kt) break;
            top++;
        }
        if(kt) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    }
}
