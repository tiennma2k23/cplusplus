#include <bits/stdc++.h>
using namespace std;

int main()
{  freopen ("MATH.inp","r",stdin);
   freopen("MATH.out","w",stdout);
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   long long q;
   cin>>q;
   while (q--){
   long long s,n;
   cin>>n;
   s=n-n/2-n/3-n/7-n/5+n/6+n/14+n/10+n/21+n/35+n/15-n/42-n/70-n/30-n/105+n/210;
   cout<<s<<endl;;
   }
}
