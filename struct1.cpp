#include<bits/stdc++.h>
using namespace std;
int main()
{
bool daNhap=false;
long long int i,n,key,pos;
struct Sinhvien{
    string ten;
    string gt;
    int age;
    float dtb;
} sv,a[60];

//Menu

{
    cout<<"Chuong trinh quan li sinh vien cua HS lop 10A2!!!"<<endl;
    cout<<"1.Nhap danh sach sinh vien."<<endl;
    cout<<"2.Xuat danh sach sinh vien."<<endl;
    cout<<"3.Them sinh vien."<<endl;
    cout<<"4.Loai bo sinh vien."<<endl;
    cout<<"0.Thoat chuong trinh."<<endl;
}
while (true)
{
cout<<"Moi ban chon: "<<endl;cin>>key;
// Nhập

    if (key==1)
    {
    cout<<"Ban da chon nhap DS SV"<<endl;
    cout<<"Moi ban nhap so hoc sinh"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cout<<"Hoc sinh thu "<<i<<endl;
        cin.ignore();
        cout<<"Nhap ten: ";
        getline(cin,sv.ten);
        //cin.ignore();
        cout<<"Gioi tinh: ";
        getline(cin,sv.gt);
        cout<<"Tuoi: ";
        cin>>sv.age;
        cout<<"Diem tb: ";
        cin>>sv.dtb;
        a[i]=sv;
    }
    cout<<"Chuc mung ban da nhap thanh cong"<<endl;
    daNhap=true;
    }

//xuất
    else if (key==2)
    {
        if (daNhap)
            {
                cout<<"Ban da chon xuat sinh vien"<<endl;
                for (i=1;i<=n;i++)
                {
                        cout<<"Thong tin hoc sinh thu "<<i<<endl;
                        cout<<"Ho ten SV: "<<a[i].ten<<endl;
                        cout<<"Gioi tinh SV: "<<a[i].gt<<endl;
                        cout<<"Tuoi SV: "<<a[i].age<<endl;
                        cout<<"Diem tb SV: "<<a[i].dtb<<endl;
                        cout<<endl;
                }

            }
        else cout<<"Ban vui long nhap DS SV truoc"<<endl;
    }
//Thêm vào
    else if (key==3)
    {
        cin.ignore();
        cout<<"Nhap ten: ";
        getline(cin,sv.ten);
        //cin.ignore();
        cout<<"Gioi tinh: ";
        getline(cin,sv.gt);
        cout<<"Tuoi: ";
        cin>>sv.age;
        cout<<"Diem tb: ";
        cin>>sv.dtb;
        a[n+1]=sv;
        n++;
        for (i=1;i<=n;i++)
                {
                        cout<<"Thong tin hoc sinh thu "<<i<<endl;
                        cout<<"Ho ten SV: "<<a[i].ten<<endl;
                        cout<<"Gioi tinh SV: "<<a[i].gt<<endl;
                        cout<<"Tuoi SV: "<<a[i].age<<endl;
                        cout<<"Diem tb SV: "<<a[i].dtb<<endl;
                        cout<<endl;
                }
    }
//Bớt đi
    else if (key==4)
    {
        if (daNhap&&n>0)
        {
        cout<<"Moi ban nhap vi tri can xoa vinh vien: "<<endl;
        cin>>pos;
        for (i=1;i<=n;i++)
                {
                        if (i!=pos)
                        {
                        if (i<pos) cout<<"Thong tin hoc sinh thu "<<i<<endl;
                        else cout<<"Thong tin hoc sinh thu "<<i-1<<endl;
                        cout<<"Ho ten SV: "<<a[i].ten<<endl;
                        cout<<"Gioi tinh SV: "<<a[i].gt<<endl;
                        cout<<"Tuoi SV: "<<a[i].age<<endl;
                        cout<<"Diem tb SV: "<<a[i].dtb<<endl;
                        cout<<endl;
                        }
                }
            n--;
        }
        else cout<<"Khong thuc hien duoc"<<endl;
    }
    else if (key==0)
    {
        cout<<"Cam on ban da su dung dich vu. Xin chao"<<endl;
        break;
    }
    else cout<<"Ma so khong hop le"<<endl;
}



}

