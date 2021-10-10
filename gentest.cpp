
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MINN = 1, MAXN = 10, MINM = 1e4, MAXM = 1e4, MINV = 1e8, MAXV = 1e9,inf=1e4-1;;
int32_t main()
{
    srand(time(NULL));
    freopen("ssub.inp","w",stdout);
    int n=(MINM + rand() % (MAXM - MINM + 1));
    cout<<n<<endl;
    while (n--){
    int a=(MINV + rand() % (MAXV - MINV + 1));cout<<a<<" ";
    }
}
