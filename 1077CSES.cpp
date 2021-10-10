
#include <bits/stdc++.h>

#define nl " "
#define ll long long
#define task "BACHO"
#define st first
#define nd second
#define taskname ""
#define orderered_set tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>


using namespace std;

const int maxn=2e5+2;
int n,k;
multiset<int> s1,s2;

void xuat()
{
    cout<<"s1:  ";
    for(int l:s1) cout<<l<<' ';
    cout<<nl;
    cout<<"s2:  ";
    for(int l:s2) cout<<l<<' ';
    cout<<nl;
}


int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
#endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;


    vector<int> a(n),b(k);

    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(i<k) b[i]=a[i];
    }

    sort(b.begin(),b.end());

    for(int i=0;i<k;++i)
    {
        if(i<(k+1)/2) s1.insert(b[i]);
        else s2.insert(b[i]);
    }


    cout<<*s1.rbegin()<<nl;

    // xuat();

    int ans=*s1.rbegin();

    for(int i=k;i<n;++i)
    {
        int val=a[i-k];
        auto x=s1.find(val);
        auto y=s2.find(val);

        if(y!=s2.end()) s2.erase(y);
        else s1.erase(x);



        /*if(a[i]<ans) s1.insert(a[i]);
        else s2.insert(a[i]);


        if(s1.size()-1>s2.size())
        {
            auto it1=s1.end();
            s2.insert(*it1);
            s1.erase(s1.find(*it1));
        }

        if(s1.size()<s2.size())
        {
            auto it2=s2.begin();
            s1.insert(*it2);
            s2.erase(s1.find(*it2));
        }

        ans=*s1.rbegin();*/

        if(a[i]>ans)
        {
            s2.insert(a[i]);
            if(s2.size()>k-(k+1)/2)
            {
                s1.insert(*s2.begin());
                s2.erase(s2.begin());
            }
        }
        else
        {
            s1.insert(a[i]);
            if(s1.size()>(k+1)/2)
            {
                s2.insert(*s1.rbegin());
                auto it=s1.end();
                s1.erase(--it);
            }
        }


        ans=*s1.rbegin();
        cout<<ans<<nl;
        // xuat();
    }


    return 0;
}
