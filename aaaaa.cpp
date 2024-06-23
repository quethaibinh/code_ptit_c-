#include<bits/stdc++.h>

using namespace std;
#define ll long long

int k1 = 1, k2 = 1, k3 = 1;

class KH {
public:
    string ma, ten, gt, ns, dc;
    KH() {
        ma = "KH";
        ma += to_string(k1++);
        int x = 3 - to_string(k1).size();
        while (x > 0) {
            ma += "0";
            --x;
        }
    }
    friend istream& operator >> (istream& is, KH& a) {
        scanf("\n");
        getline(is, a.ten);
        is >> a.gt >> a.ns;
        scanf("\n");
        getline(is, a.dc);
        return is;
    }
};

class MH {
public:
    string ma, ten, dv;
    ll gm, gb;
    MH() {
        ma = "MH";
        ma += to_string(k2++);
        int x = 3 - to_string(k2).size();
        while (x > 0) {
            ma += "0";
            --x;
        }
    }
    friend istream& operator >> (istream& is, MH& a) {
        scanf("\n");
        getline(is, a.ten);
        is >> a.dv >> a.gm >> a.gb;
        return is;
    }
};

class HD {
public:
    string ma, m1, m2;
    int sol;
    string tenkh, dc, tenmh, dv;
    ll gm, gb, tongtien;
    HD() {
        ma = "HD";
        ma += to_string(k3++);
        int x = 3 - to_string(k3).size();
        while (x > 0) {
            ma += "0";
            --x;
        }
    }
    friend istream& operator >> (istream& is, HD& a) {
        is >> a.m1 >> a.m2 >> a.sol;
        return is;
    }
    friend ostream& operator << (ostream& os, HD a) {
        os << a.ma << ' ' << a.tenkh << ' ' << a.dc << ' ' << a.tenmh << ' ' << a.dv << ' ' << a.gm << ' ' << a.gb << ' ' << a.sol << ' ' << a.tongtien << '\n';
        return os;
    }
};

int main() {
    ifstream ifskh, ifsmh, ifshd;
    ifskh.open("KH.in");
    ifsmh.open("MH.in");
    ifshd.open("HD.in");

    int n1, n2, n3;
    KH a[20];
    MH b[50];
    HD c[110];
    ifskh >> n1;
    for (int i = 0; i < n1; i++) {
        ifskh >> a[i];
    }
    ifsmh >> n2;
    for (int i = 0; i < n2; i++) {
        ifsmh >> b[i];
    }

    ifshd >> n3;
    for (int i = 0; i < n3; i++) {
        ifshd >> c[i];
        for (int j = 0; j < n1; j++) {
            if (c[i].m1 == a[j].ma) {
                c[i].tenkh = a[j].ten;
                c[i].dc = a[j].dc;
                break;
            }
        }
        for (int j = 0; j < n2; j++) {
            if (c[i].m2 == b[j].ma) {
                c[i].tenmh = b[j].ten;
                c[i].dv = b[j].dv;
                c[i].gm = b[j].gm;
                c[i].gb = b[j].gb;
                c[i].tongtien = c[i].gb * c[i].sol;
                break;
            }
        }
    }
    for (int i = 0; i < n3; i++) {
        cout << c[i];
    }

    ifskh.close();
    ifsmh.close();
    ifshd.close();

    return 0;
}