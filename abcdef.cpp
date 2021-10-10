#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=1e6+1,N=1e6+1;
const int base = 31;
const int MOD = 1e6+3;
set<int> gr[MOD+1];
set<int> vt[MOD+1];
vector<int> hashs[maxn];
string s[maxn];
bool ck[maxn];
vector<II> ans;
int POW[N+5];

bool cmp(string a,string b)
{
    return a.length()>b.length();
}
void prepare()
{
     POW[0]=1;
     for (int i = 1; i <= N; i++)
    	POW[i] = (POW[i - 1] * base) % MOD;
}

int gethash(int i,int j) {
    //return (hashT[j] - hashT[i - 1] * POW[j - i + 1] + MOD * MOD) % MOD;
    return (hashs[i][j]-POW[j]+MOD*MOD)%MOD;
}

int32_t main()
{
    prepare();
    int n;
    cin>>n;
    for (int i=1;i<=2*n;i++)
    {
        cin>>s[i];
        s[i]=' '+s[i];
        //string s1="";
        hashs[i].push_back(0);
        int h=0;
        for (int j=1;j<s[i].length();j++)
        {
            h=(h*base+s[i][j]-'a'+1)%MOD;
            hashs[i].push_back(h);
            //hashs[i][j]=(hashs[i][j-1]*base+s[j]-'a'+1)%MOD;
            //vt[h].insert(i);
            //gr[i].insert(h);
        }
    }
    sort(s+1,s+2*n+1,cmp);
    for (int i=1;i<=2*n;i++)
    {
        for (int j=1;j<s[i].length();j++)
        {
            int h=gethash(i,j);
            vt[h].insert(i);
            gr[i].insert(h);
        }
    }
    for (int i=1;i<=2*n;i++) if (!ck[i])
    {
        int j=s[i].length()-1;
        while (j>0)
        {
            int h=gethash(i,j);
            //cerr<<i<<j<<" "<<h<<" "<<vt[h].size()<<endl;
            if (vt[h].size()>=2)
            {
                while (vt[h].size()>=2){
                auto it=vt[h].begin();
                auto it1=it;
                it1++;
                int pos1=*it;
                int pos2=*it1;
                //vt[h].erase(vt[h].begin());
                //vt[h].erase(vt[h].begin());
                ans.push_back(II(pos1,pos2));
                ck[pos1] = true;
                ck[pos2]=true;
                for (auto v:gr[pos1]) vt[v].erase(vt[v].find(pos1));
                for (auto v:gr[pos2]) vt[v].erase(vt[v].find(pos2));
                }
                break;
            }
            //s1.erase(s1.length()-1,1);
            j--;
        }
    }
    for (auto val:ans) cout<<val.fi<<" "<<val.se<<endl;
}
