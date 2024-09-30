#include<bits/stdc++.h>
#include <chrono>
using namespace std;
#define int long long
const int INF = numeric_limits<int>::max();
const int nax = (int)(2005);
const int MAXN= (int)(1e6+5);
const int mod =1e9+2277;
const int BASE = (int)(301);
#define all(x) (x).begin(), (x).end()
#define size(x) ((int)x.size())
#define double long double
#define pii pair<int, int>
#define tup tuple<int, int, int>
#define iii pair<pii, int>
#define unsetbit(mask, x) ((mask)&=(~(1 << x)))
#define setbit(mask, x) ((mask)|=(1 << x))
#define reversebit(mask, x) ((mask) ^=(1 << n))
int dx[4] = { -1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
const int d8x[8] = { -1, 1, 0, 0, -1, 1, 1, -1};
const int d8y[8] = {0, 0, 1, -1, 1, -1, 1, -1};
const int Trie_sz = 1e6;
#define get_bit(mask, x) ((mask)>>(x)&1)
const int LOG=19;

 
template<class X, class Y>
bool maximize(X& x, const Y y) {
    if (y > x) {x = y; return true;}
    return false;
}
 
template<class X, class Y>
bool minimize(X& x, const Y y) {
    if (y < x) {x = y; return true;}
    return false;
}

class cHocSinh {
private:
    string ma;
    string hoTen;
    string gioiTinh;
    int namSinh;
    double diemTB;

public:
    void nhapThongTin() {
        cout << "Nhap ma hoc sinh: ";
        cin >> ma;
        cin.ignore(); 
        cout << "Nhap ho va ten hoc sinh: ";
        getline(cin, hoTen);
        cout << "Nhap gioi tinh: ";
        cin >> gioiTinh;
        cout << "Nhap nam sinh: ";
        cin >> namSinh;
        cout << "Nhap diem trung binh: ";
        cin >> diemTB;
    }

    double getDiemTB() const {
        return diemTB;
    }

    int getNamSinh() const {
        return namSinh;
    }

    int getTuoi() const {
        return 2024 - namSinh; 
    }
};
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     //freopen("connect.inp", "r", stdin);
    // freopen("connect.out", "w", stdout);
     cHocSinh hs1, hs2;

    cout << "Nhap thong tin hoc sinh thu nhat:" << '\n';
    hs1.nhapThongTin();

    cout << "\nNhap thong tin hoc sinh thu hai:" << '\n';
    hs2.nhapThongTin();

    if (hs1.getDiemTB() > hs2.getDiemTB()) {
        cout << "\nhoc sinh thu nhat co diem trung binh cao hon." << '\n';
    } else if (hs1.getDiemTB() < hs2.getDiemTB()) {
        cout << "\nhoc sinh thu nhat co diem trung binh cao hon." << '\n';
    } else {
        cout << "\nca hai hoc sinh co diem trung binh bang nhau." <<  '\n';
    }

    if (hs1.getTuoi() < hs2.getTuoi()) {
        cout << "hoc sinh thu nhat nho tuoi hon" <<  '\n';
    } else if (hs1.getTuoi() > hs2.getTuoi()) {
        cout << "hoc sinh thu hai nho tuoi hon." <<  '\n';
    } else {
        cout << "ca hai hoc sinh bang tuoi." <<  '\n';
    }
    exit(0);
    }
    
   


