#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long q;
    cin >> q;
    while (q--) {
        long long n,g,b;
        cin>>n>>g>>b;
        if (n<=g)cout<<n<<endl;
        else
        {
            long long n1=n;
            n=(n+1)/2;
            if (n%g==0) cout<<max(n+(n/g-1)*b,n1)<<endl;
            else
                cout<<max(n+(n/g)*b,n1)<<endl;
        }
    }
}
