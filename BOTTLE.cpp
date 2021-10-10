#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,j,i,a[100000],Min[100000],k,t=0;
    deque<long long> q;
    cin>>n>>k;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        while (!q.empty()&&a[q.back()]>=a[i]) q.pop_back();
        q.push_back(i);
        if (q.front()+k<=i) q.pop_front();
        if (i>=k) Min[i-k+1]=q.front();
    }
    for (i=1;i<=n-k+1;i++) cout<<Min[i]<<endl;
}
