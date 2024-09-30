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

class cArray {
private:
    vector<int> a;

public:
    cArray(int n) {
        srand(time(0)); 
        for (int i = 0; i < n; i++) {
            arr.push_back(rand() % 200 - 100); 
        }
    }

    void display() const {
        for (int num : a) {
            cout << num << " ";
        }
        cout << '\n';
    }

    int maxNegative() const {
        int maxNeg = -101; 
        for (int num : a) {
            if (num < 0 && num > maxNeg) {
                maxNeg = num;
            }
        }
        return (maxNeg == -101) ? 0 : maxNeg; 
    }

    int dem(int x) const {
        int cnt = 0;
        for (int num : a) {
            if (num == x) {
                cnt++;
            }
        }
        return cnt;
    }

    bool isDecreasing() const {
        for (int i = 1; i < size(a); i++) {
            if (a[i] >= a[i - 1]) {
                return false;
            }
        }
        return true;
    }

    void sapxeptang() {
        sort(all(a));
    }
};
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     //freopen("connect.inp", "r", stdin);
    // freopen("connect.out", "w", stdout);
     int n;
    cin >> n;

    cArray myArray(n);

    cout << "\nMang ngau nhien: ";
    myArray.display();

    cout << "\nSo am lon nhat trong mang: " << myArray.maxNegative() << '\n';;

    int x;
    cout << "\nnhap x de dem so lan xuat hien: ";
    cin >> x;
    cout << "So lan xuat hien cua x " << x << ": " << myArray.dem(x) << '\n';

    cout << "\nMang co giam dan hay khong: " << (myArray.isDecreasing() ? "Co" : "Khong") << '\n';;

    myArray.sapxeptang();
    cout << "\nMang sau khi sap xep tang dan: ";
    myArray.display();
    exit(0);
    }
    
   


