#include<bits/stdc++.h>

using namespace std;
#define ll long long

// GD: 250000  
// PGD: 200000 
// TP: 180000
// NV: 150000

map<string, ll> mp;

struct NhanVien{
    string ma, ten, cv;
    ll ngay, luong, thuong, pc, luongc, thunhap;
};

void dinhnghia(){
    mp["GD"] = 250000;
    mp["PGD"] = 200000;
    mp["TP"] = 180000;
    mp["NV"] = 150000;
}

int k = 1;
void nhap(NhanVien &a){
    dinhnghia();
    a.ma += "NV";
    int x = 2 - to_string(k).size();
    while(x --){
        a.ma += "0";
    }
    a.ma += to_string(k);
    ++ k;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.luong >> a.ngay >> a.cv;
    a.luongc = a.luong * a.ngay;
    a.pc = mp[a.cv];
    if(a.ngay >= 25){
        a.thuong = a.luongc * 0.2;
    }
    else if(a.ngay >= 22 && a.ngay < 25){
        a.thuong = a.luongc * 0.1;
    }
    else{
        a.thuong = 0;
    }
    a.thunhap = a.luongc + a.thuong + a.pc;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    NhanVien a;
    nhap(a);
    cout << a.ma << ' ' << a.ten << ' ' << a.luongc << ' ' << a.thuong << ' ' << a.pc << ' ' << a.thunhap << '\n';
	
	return 0;
}
