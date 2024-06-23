#include<bits/stdc++.h>

using namespace std;

class KhachHang{
    public:
        string mkh, ten, gioi, ns, dc;
    public:
        KhachHang();
        friend istream &operator >> (istream &is, KhachHang &a);
};

class MatHang{
    public:
        string mmh, ten, donvi;
        int gmua, gban, loi;
    public:
        MatHang();
        friend istream &operator >> (istream &is, MatHang &a);
        friend int ln(MatHang&);
};

class HoaDon{
    public:
        string mhd, mkh, mmh, tenkh, dc, tenmh;
        int soluong, loinhuan;
    public:
        HoaDon();
        friend istream &operator >> (istream &is, HoaDon &a);
        friend ostream &operator << (ostream &os, HoaDon a);
        int getloi();
};

istream &operator >> (istream &is, KhachHang &a){
    is.ignore();
    getline(is, a.ten);
    cin >> a.gioi >> a.ns;
    is.ignore();
    getline(is, a.dc);
    return is;
}

istream &operator >> (istream &is, MatHang &a){
    is.ignore();
    getline(is, a.ten);
    cin >> a.donvi >> a.gmua >> a.gban;
    ln(a);
    return is;
}

istream &operator >> (istream &is, HoaDon &a){
    is >> a.mkh >> a.mmh >> a.soluong;
    return is;
}

ostream &operator << (ostream &os, HoaDon a){
    os << 
}

int k1 = 1;
KhachHang :: KhachHang(){
    mkh = "KH";
    int x = 3 - to_string(k1).size();
    while(x --){
        mkh += '0';
    }
    mkh += to_string(k1);
    ten = "";
    gioi = "";
    ns = "";
    dc = "";
    ++ k1;
}


int k2 = 1;
MatHang :: MatHang(){
    mmh = "KH";
    int x = 3 - to_string(k2).size();
    while(x --){
        mmh += '0';
    }
    mmh += to_string(k2);
    ten = "";
    donvi = "";
    gmua = 0, gban = 0;
    ++ k2;
}

int k3 = 1;
HoaDon :: HoaDon(){
    mhd = "HD";
    int x = 3 - to_string(k3).size();
    while(x --){
        mhd += '0';
    }
    mhd += to_string(k3);
    mkh = "";
    mmh = "";
    soluong = 0;
    ++ k3;
}

int ln(MatHang &a){
    a.loi = a.gban - a.gmua;
}

int HoaDon :: getloi(){
    return loinhuan;
}


bool cmp(HoaDon &a, HoaDon &b){
    return a.getloi() < b.getloi();
}

void sapxep(HoaDon dshd[100], int n){
    sort(dshd, dshd + n, cmp);
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;


	return 0;
	
}
