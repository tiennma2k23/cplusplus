#include<bits/stdc++.h>
#define int long long
/*
Ngày mà em đến đã làm cho
Trái tim hi vọng
Dịu dàng hương hoa đang khẽ
Nô đùa mái tóc em
Nụ cười duyên dáng cho lòng anh
Nhớ thương em nhiều
Rồi ngày em đi
Cho lòng anh dường như vỡ tan
Là vì em đã hết thương tôi rồi
Giờ em đã có ai bên đợi
Tôi đợi chi một người không thương
Tôi chờ chi người làm tôi đau
Giờ đây nếu có quay trở về
Thì con tim đã thôi mong chờ
Em về đi... mong chờ chi...
Vỡ tan tình ta...
Anh biết rằng em
đã chẳng còn nhung nhớ
Về những kỉ niệm chuyện tình của xa xưa
Nhưng anh vẫn giữ trong lòng nhiều hi vọng
Hỏi lòng rằng mình khoảng cách đủ xa chưa?
Ừ thì em đã hết thương anh rồi
Dẫu biết vậy
Nhưng chẳng thể ngừng mong
Em ra đi lòng anh nhiều trăn trở
Như sương trĩu nặng
Chiếc lá vẫn hờn đong
Anh, chẳng thể nói cho em
Nghe nên gửi tâm tư
Vào trong một đoạn nhạc
Chẳng mong rằng hai đứa sẽ giàu sang
Cơm trắng dưa cà có nhau dù đạm bạc
Mọi chuyện giờ có lẽ đã đổi thay
Em theo người còn anh hoài mong mỏi
Mây trời cứ để gió kia thổi bay
Nhưng riêng tình anh chông
Mong hoài không đổi
Ngày mà em đến đã làm
Cho trái tim hi vọng
Dịu dàng hương hoa
đang khẽ nô đùa mái tóc em
Nụ cười duyên dáng cho lòng anh
Nhớ thương em nhiều
Rồi ngày em đi
Cho lòng anh dường như vỡ tan
Là vì em đã hết thương tôi rồi
Giờ em đã có ai bên đợi
Tôi đợi chi một người không thương
Tôi chờ chi người làm tôi đau
Giờ đây nếu có quay trở về
Thì con tim đã thôi mong chờ
Em về đi...mong chờ chi...
Ánh mắt đôi môi còn đó
Nhưng mà sao lòng em khuất xa
Níu kéo em không được nữa
Bởi vì em đã yêu ai rồi
Còn mình anh với đêm
Bầu bạn cùng với cô đơn
Chúc em hạnh phúc bên người em ước mơ...
Ánh mắt đôi môi còn đó
Nhưng mà sao lòng em khuất xa
Níu kéo em không được nữa
Bởi vì em đã yêu ai rồi
Còn mình anh với đêm
Bầu bạn cùng với cô đơn
Chúc em hạnh phúc
Bên người em ước mơ...
Vỡ tan tình ta...
*/
using namespace std;
const int maxn=2e5+1;
int n,p,q,a[maxn],b[maxn],valb[maxn],vala[maxn],d[maxn],c[maxn],tg[maxn];
void _swap()
{
    for (int i=1; i<=p; i++) tg[i]=a[i];
    for (int i=1; i<=q; i++) a[i]=b[i];
    for (int i=1; i<=p; i++) b[i]=tg[i];
    swap(p,q);
}

void solve()
{
    cin >> n >> p >> q;
    for (int i=1; i<=p; i++) cin >> a[i];
    for (int i=1; i<=q; i++) cin >> b[i];
    if (p > q)
    {
        _swap();
    }
    sort (a + 1, a + 1 + p);
    sort (b + 1, b + 1 + q);
    for (int i=1; i<=n; i++) vala[i] =0, valb[i] = 0;
    int i1 = 1, j1 = 1;
    while (i1 <= p && j1 <= q)
    {
        if (a[i1] == b[j1])
        {
            vala[i1] = valb[j1] = -1;
            i1++, j1++;
        }
        else
        {
            if (a[i1] < b[j1]) i1++;
            else j1++;
        }
    }
    //
    //
    //
    //
    int le = 0, ri = 0;
    for (int i=1; i<=p; i++) if (vala[i] != -1) le++,c[le] = a[i];
    for (int i=1; i<=q; i++) if (valb[i] != -1) ri++,d[ri] = b[i];

    int tmp = (le + ri) / 2;
    int ans = (ri - le) / 2 + tmp;
    int  pos = 1, dem = 0;tmp = (ri - le) / 2;
    while (pos <= ri && dem<tmp)
    {
        if (d[pos] == d[pos + 1] && pos + 1 <= ri) ans--, pos ++, dem++;
        pos++;
    }
    cout<<ans<<endl;
}
int32_t main()
{
    int nt;
    cin >> nt;
    while (nt--)
    {
        solve();
    }

}
