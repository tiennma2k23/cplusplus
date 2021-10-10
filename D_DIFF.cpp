#include<bits/stdc++.h>
#define int long long
using namespace std;

int tong(int l,int r)
{
    int sum;
    int sl=(r-l+1);
    int tmp=(l+r);
    if (sl%2==0) sum=(sl/2)*tmp;
    else sum=(sl)*(tmp/2);
    return sum;
}

int32_t main()
{
    int l,r;
    cin>>l>>r;
    int sum=tong(l,r);
    int key1=sum/2;
    int key2=sum-key1;
    int l1=l,r1=r,res2,res1;
    //cout<<key1<<endl;

    while (l<=r)
    {
        int mid=(l+r)/2;
        int s=tong(l1,mid);
        if(s<=key1)
        {
            l=mid+1;
            res1=mid;
        }
        else r=mid-1;
    }
    l=l1,r=r1;
    while (l<=r)
    {
        int mid=(l+r)/2;
        int s=tong(l1,mid);
        if(s<=key2)
        {
            l=mid+1;
            res2=mid;
        }
        else r=mid-1;
    }
    //cout<<res1<<res2<<endl;
    int cl1=abs(tong(l1,res1)-tong(res1+1,r1));
    int cl2=abs(tong(l1,res2)-tong(res2+1,r1));
    if (cl1<cl2) cout<<res1<<endl;
    else cout<<res2<<endl;
}
