#include<iostream>
using namespace std;
int main()
{
    #include<bits/stdc++.h>
using namespace std;
#define fs first
#define sd second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
const int oo=1e9+7, mod=1e9+7;
const long long N=1e18;
void coutpair(ii x) {cout<<x.fs<<" "<<x.sd<<endl;}
int min3(int a, int b, int c) {return min(a,min(b,c));}
int max3(int a, int b, int c) {return max(a,max(b,c));}

vector<long long> q;
long long Pow2[100],Pow5[100],Pow3[100];
void sinh()
{
    Pow2[0]=Pow5[0]=Pow3[0]=1;
    for (int i=1;i<=59;i++) Pow2[i]=Pow2[i-1]*2;
    for (int i=1;i<=37;i++) Pow3[i]=Pow3[i-1]*3;
    for (int i=1;i<=25;i++) Pow5[i]=Pow5[i-1]*5;
    for (int i=0;i<=59;i++) for (int j=0;j<=37,Pow3[j]<=N/Pow2[i];j++)
    {
        if (j>37) break;
        long long tmp=Pow2[i]*Pow3[j];
        for (int k=0;Pow5[k]<=N/tmp;k++) { if (k>25) break; q.push_back(tmp*Pow5[k]);}
    }
    sort(q.begin(),q.end());
}
int main()
{
	//freopen("BEAUTY.inp","r",stdin);
	//freopen("BEAUTY.out","w",stdout);
    sinh();
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        int vt=lower_bound(q.begin(),q.end(),n)-q.begin();
        if (vt>q.size()-1 || q[vt]!=n) cout<<"-1"<<endl; else cout<<vt+1<<endl;
    }
	return 0;
}
}
