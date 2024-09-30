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

class SoPhuc {
private:
    double thuc; 
    double ao;   

public:
    SoPhuc(double phanThuc = 0, double phanAo = 0) {
        thuc = phanThuc;
        ao = phanAo;
    }

    void setThuc(double phanThuc) {
        thuc = phanThuc;
    }

    void setAo(double phanAo) {
        ao = phanAo;
    }

    double getThuc() const {
        return thuc;
    }

    double getAo() const {
        return ao;
    }

    void nhapSoPhuc() {
        cout << "Nhap phan thuc: ";
        cin >> thuc;
        cout << "Nhap phan ao: ";
        cin >> ao;
    }

    void xuatSoPhuc() const {
        if (ao < 0) {
            cout << thuc << " - " << -ao << "i" << '\n';
        } else {
            cout << thuc << " + " << ao << "i" << '\n';
        }
    }

    SoPhuc cong(const SoPhuc& sp) const {
        SoPhuc tong;
        tong.thuc = thuc + sp.thuc;
        tong.ao = ao + sp.ao;
        return tong;
    }
};
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     //freopen("connect.inp", "r", stdin);
    // freopen("connect.out", "w", stdout);
    SoPhuc sp1, sp2, spTong;

    cout << "Nhap so phuc thu nhat: " << '\n';
    sp1.nhapSoPhuc();

    cout << "Nhap so phuc thu hai: " << '\n';
    sp2.nhapSoPhuc();


    cout << "\nSo phuc thu nhat: ";
    sp1.xuatSoPhuc();

    cout << "So phuc thu hai: ";
    sp2.xuatSoPhuc();

    spTong = sp1.cong(sp2);


    cout << "\nTong hai so phuc: ";
    spTong.xuatSoPhuc();

    exit(0);
    }
    
   


