#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,k,i,j,d[1000],min_h=9999999,min_c=999999999,max_h=-1,max_c=-1;
    string w;
    char ch[100][100];
    cin>>k;
    cin>>m>>n;
    cin>>w;
    for (i=0;i<w.length();i++) d[int(w[i])]=1;
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
    {
        cin>>ch[i][j];
        if (d[int(ch[i][j])]==1)
        {
            min_h=min(min_h,i);
            max_h=max(max_h,i);
            min_c=min(min_c,j);
            max_c=max(max_c,j);
        }
    }
    if (k==1) cout<<(max_h-min_h+1)*(max_c-min_c+1)<<endl;
    else cout<<-1<<endl;
}
