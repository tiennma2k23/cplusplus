#include<iostream>
#define ll long long
const int n = 1e6;
using namespace std;
int dem[n+5],minPrime[n+5];
int a,b,q,d,i,k;
void taomang()
{
    for ( int i=1;i<=n;i++) minPrime[i]=i;
    for (int i = 2; 1ll * i * i <= n; i++)
    if (minPrime[i] == i)
        for (int j = i * i; j <= n; j += i)
            if (minPrime[j] == j)
                minPrime[j] = i;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    taomang();
    dem[1]=0;
    for (i=2;i<=n;i++)
    {
        k=i;d=0;
        while (k>1)
        {
            k=k/minPrime[k];
            d++;
        }
        dem[i]=dem[i-1]+d;
    }
    scanf("%d",&q);
    while (q--){
        scanf("%d %d",&a,&b);
        printf("%d\n",dem[a]-dem[b]);
    }
}
