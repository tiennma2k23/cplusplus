#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define fou(i,a,b) for ( int i=a ; i<=b ; i++ )
#define fod(i,a,b) for ( int i=b ; i>=a ; i-- )

const int N=35;
int a[N],b[N],sum=0;

void findsum( int n,int k, int c[], int d[])
{
    sum=0;
    int n1 = n;
    sort(c+1,c+n+1);
    sort(d+1,d+n+1);
    while ( k-- )
    {
        c[n-n1+1] = d[n1];
        n1--;
    }
    for ( int i = 1 ; i<=n ; i++ )
        sum = sum + c[i];
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,k;
    cin >> t;
    while ( t-- )
    {
        cin >> n >> k;
        for ( int i = 1 ; i <= n ; i++ )
            cin >> a[i];
        for ( int i =1 ; i <= n ; i++ )
            cin >> b[i];
        findsum(n,k,a,b);
    }
}
