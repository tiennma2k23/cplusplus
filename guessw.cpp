#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    string s="april fool";
    int x;
    cin>>x;
    cout<<s[(x-1)%s.length()]<<endl;
}
