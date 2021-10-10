
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MINN = 1, MAXN = 100, MINM = 1, MAXM = 1e3, MINV = 0, MAXV = 10000000000;
int n, m;
vector<int> v;
int32_t main()
{
    srand(time(NULL));

    for(int iTest = 1; iTest <= 1000; iTest++)
    {
        ofstream inp("A.inp");
            int n=(MINN + rand() % (MAXN - MINN + 1));
            inp << n;
            inp<<endl;
            for (int i=1;i<=n;i++)
            {
                int v=(MINV+rand()%(MAXV-MINV+1));
                int m=(MINM+rand()%(MAXM-MINM+1));
                if (v==0) inp << v<<" ";
                else if (m%2) inp << -v<<" ";
                else inp << v<<" ";
            }
            inp<<endl;
            for (int i=1;i<=n;i++)
            {
                int v=(MINV+rand()%(MAXV-MINV+1));
                int m=(MINM+rand()%(MAXM-MINM+1));
                if (v==0) inp << v<<" ";
                else if (m%2) inp << -v<<" ";
                else inp << v<<" ";
            }
            inp<<endl;
        inp.close();
        system("tichchap.exe");
        system("tichchapsub1.exe");
        if(system("fc A.out A.ans") != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}
