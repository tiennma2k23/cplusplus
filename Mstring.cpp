#include<bits/stdc++.h>
#define TASK "Mstring"
#define ll long long
using namespace std;
string s;
ll f[2001][2001];
const ll p=1e9+7;
ll solve(ll a, ll b)
{
    if (a==s.length()||b==s.length()) return 1;
    if (f[a][b]>=0) return f[a][b];
    ll kq=0;
    if (s[a]==s[b]) kq=(kq+solve(a+1,b+1))%p;
    kq=(kq+solve(a,b+1))%p;
    kq=(kq+solve(a+1,b))%p;
    kq=(kq-solve(a+1,b+1)+p)%p;
    return f[a][b]=kq;
}
int main()
{
    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    cin>>s;
    memset(f,-1,sizeof(f));
    ll ans=(solve(0,0)%p-1+p)%p;
    cout<<ans<<endl;
}
/*Trong học kì này ở trường Hogwarts, Harry Potter tham gia lớp học “Muggle học”, trong lớp học này Harry Potter được học về bộ môn lập trình mà được rất nhiều Muggle yêu thích.
Hôm nay Harry Potter được giáo sư dạy về thuật toán quy hoạch động, Harry cảm thấy rất hứng thú với bài toán xâu đối xứng, một bài toán kinh điển về quy hoạch động. Bài toán được nói lại như sau: Cho một xâu s có độ dài là n, hãy đếm xem có bao nhiêu xâu con ( không nhất thiết phải liên tiếp ) của s mà theo thứ tự là xâu đối xứng.
Nhưng Harry nghĩ ra một bài toán khác là cho xâu s, với mỗi xâu bất kì, gọi x là số cách để tạo ra xâu đó bằng cách xóa một số ( hoặc không ) kí tự trong xâu s, độ đẹp của xâu đó là x^2, không tính xâu rỗng. Harry muốn tìm tổng độ đẹp của tất cả các xâu khác nhau có thể tạo được bằng cách xóa một số ( hoặc không ) kí tự trong xâu s.
Yêu cầu: Cho biết xâu s, tính tổng độ đẹp của các xâu khác nhau có thể tạo được từ xâu s lấy dư cho 10^9+7
Input:
	Dòng đầu chứa xâu s gồm các kí tự in thường từ ‘a’ đến ‘z’
Output:
	Một dòng duy nhất là kết quả của bài toán lấy dư với 10^9+7*/

