#include<bits/stdc++.h>
void update1()
{
    void update(int id, int l, int r, int i, int v) {
    if (i < l || r < i) {
        return ;
    }
    if (l == r) {
        ST[id] = v;
        return ;
    }

    int mid = (l + r) / 2;
    update(id*2, l, mid, i, v);
    update(id*2 + 1, mid+1, r, i, v);

    ST[id] = max(ST[id*2], ST[id*2 + 1]);
}

int get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return -INFINITY;
    }
    if (u <= l && r <= v) {
        return ST[id];
    }
    int mid = (l + r) / 2;
    return max(get(id*2, l, mid, u, v), get(id*2 + 1, mid+1, r, u, v));
}
}

void updaten()
{
    struct Node {
    int lazy; // giá trị T trong phân tích trên
    int val; // giá trị lớn nhất.
} nodes[MAXN * 4];
Hàm "đẩy" giá trị T xuống các con:

void down(int id) {
    int t = nodes[id].lazy;
    nodes[id*2].lazy += t;
    nodes[id*2].val += t;

    nodes[id*2+1].lazy += t;
    nodes[id*2+1].val += t;

    nodes[id].lazy = 0;
}
Hàm cập nhật:

void update(int id, int l, int r, int u, int v, int val) {
    if (v < l || r < u) {
        return ;
    }
    if (u <= l && r <= v) {
        // Khi cài đặt, ta LUÔN ĐẢM BẢO giá trị của nút được cập nhật ĐỒNG THỜI với
        // giá trị lazy propagation. Như vậy sẽ tránh sai sót.
        nodes[id].val += val;
        nodes[id].lazy += val;
        return ;
    }
    int mid = (l + r) / 2;

    down(id); // đẩy giá trị lazy propagation xuống các con

    update(id*2, l, mid, u, v, val);
    update(id*2+1, mid+1, r, u, v, val);

    nodes[id].val = max(nodes[id*2].val, nodes[id*2+1].val);
}
Hàm lấy giá trị lớn nhất:

int get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return -INFINITY;
    }
    if (u <= l && r <= v) {
        return nodes[id].val;
    }
    int mid = (l + r) / 2;
    down(id); // đẩy giá trị lazy propagation xuống các con

    return max(get(id*2, l, mid, u, v),
        get(id*2+1, mid+1, r, u, v));
    // Trong các bài toán tổng quát, giá trị ở nút id có thể bị thay đổi (do ta đẩy lazy propagation
    // xuống các con). Khi đó, ta cần cập nhật lại thông tin của nút id dựa trên thông tin của các con.
}
}

void fen()
{
    int getSum(int p) {
    int idx = p, ans = 0;
    while (idx > 0) {
        ans += bit[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}
Độ phức tạp khi truy vấn tổng: O(logn).

Thao tác cập nhật
Để cập nhật phần tử tại vị trí u, ta sẽ thực hiện quá trình ngược lại so với khi truy vấn tìm tổng: cộng bit nhỏ nhất vào u cho đến khi u vượt ngoài biên của mảng.

void update(int u, int v) {
    int idx = u;
    while (idx <= n) {
        bit[idx] += v;
        idx += (idx & (-idx));
    }
}
}

int sqr(int x)
{
    return x*x;
}

int _pow(int a, int b)
{
    if (b == 0) return 1 % mod;
    else if (b % 2 == 0)
        return sqr(_pow(a, b/2)) % mod;
    else
        return a * (sqr(_pow(a, b/2)) % mod) % mod;
}

int C (int k, int n)
{
    if (n < k || k < 0) return 0 ;
    return (gt[n] * rf[k] % mod) * rf[n - k] % mod ;
}

void prepare()
{
    for (int i = 1 ; i <maxn ; i++) gt[i] = gt[i - 1] * i % mod ;
    rf[maxn-1] = _pow(gt[maxn-1], mod-2) ;
    for (int i = maxn-2 ; i >= 0 ; i--) rf[i] = rf[i + 1] * (i + 1) % mod ;
}
