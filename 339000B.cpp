#include<bits/stdc++.h>
#define int long long
const int maxn=501;
char ch[maxn][maxn],r[maxn][maxn],bl[maxn][maxn];
using namespace std;
int32_t main()
{
    int h,w;
    cin >> h >> w;
    for(int i = 1 ; i <= h ; i ++)
        for(int j = 1 ; j <= w ; j ++)
            cin >> ch[i][j], r[i][j] = bl[i][j] = ch[i][j];

    for(int i = 1 ; i <= h ; i ++) r[i][1] = bl[i][w] = '#';
    for(int i = 1 ; i <= h ; i ++)
    {
        for(int j = 2 ; j < w ; j ++)
        {
            if(i % 2!=0) r[i][j] = '#';
            else bl[i][j] = '#';
        }
    }
    for(int i = 1 ; i <= h ; i ++)
    {
        for(int j = 1 ; j <= w ; j ++)
        {
            cout << r[i][j];
        }
        cout <<endl;
    }
    cout<< endl;
    for(int i = 1 ; i <= h ; i ++)
    {
        for(int j = 1 ; j <= w ; j ++)
        {
            cout << bl[i][j];
        }
        cout <<endl;
    }
}
