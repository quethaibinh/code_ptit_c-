#include<bits/stdc++.h>

using namespace std;

struct MatHang{
    string ten, nhom;
    float GiaMua, GiaBan, LoiNhuan;
    int ma;
};

void tinhloi(MatHang &a){
    a.LoiNhuan = a.GiaBan - a.GiaMua;
}

void nhap(MatHang &a){
    scanf("\n");
    getline(cin, a.ten);
    scanf("\n");
    getline(cin, a.nhom);
    cin >> a.GiaMua >> a.GiaBan;
}

void in(MatHang a){
    cout << a.ma << ' ' << a.ten << ' ' << a.nhom << ' ' << fixed << setprecision(2) << a.LoiNhuan << '\n'; 
}

bool cmp(MatHang &a, MatHang &b){
    return a.LoiNhuan > b.LoiNhuan;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    MatHang a[n + 1];
    for(int i = 1; i <= n; i ++){
        nhap(a[i]);
        tinhloi(a[i]);
        a[i].ma = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; i ++){
        in(a[i]);
    }
	
	return 0;
}
