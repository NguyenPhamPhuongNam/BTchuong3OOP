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

class HocSinh{
private:
    string hoTen;
    double diemToan;
    double diemVan;
    double diemTrungBinh;

public:
    void nhapThongTin() {
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);
        cout << "Nhap diem Toan: ";
        cin >> diemToan;
        cout << "Nhap diem Van: ";
        cin >> diemVan;
    }

    void tinhDiemTrungBinh() {
        diemTrungBinh = (diemToan + diemVan) / 2;
    }

    string xepLoai() {
        if (diemTrungBinh >= 8) {
            return "Gioi";
        } else if (diemTrungBinh >= 6.5) {
            return "Kha";
        } else if (diemTrungBinh >= 5) {
            return "Trung binh";
        } else {
            return "Yeu";
        }
    }

    void xuatThongTin() {
        cout << "Ho ten: " << hoTen << '\n';
        cout << "Diem Toan: " << diemToan << '\n';
        cout << "Diem Van: " << diemVan << '\n';
        cout << "Diem trung binh: " << diemTrungBinh << '\n';
        cout << "Xep loai: " << xepLoai() << '\n';
    }
};

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     //freopen("connect.inp", "r", stdin);
    // freopen("connect.out", "w", stdout);
    HocSinh hs;
    hs.nhapThongTin();
    hs.tinhDiemTrungBinh();
    hs.xuatThongTin();
    exit(0);
    }
    
