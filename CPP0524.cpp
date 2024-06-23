#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
    string msv, ten, lop;
    float diem1, diem2, diem3;
};

void nhap(SinhVien &a){
    cin >> a.msv;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.lop >> a.diem1 >> a.diem2 >> a.diem3;
}

void in_ds(SinhVien a[], int n){
    for(int i = 0; i < n; i ++){
        cout << i + 1 << ' ' << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << ' ';
        printf("%.1f ", a[i].diem1); 
        printf("%.1f ", a[i].diem2); 
        printf("%.1f ", a[i].diem3); 
        cout << '\n';
    }
}

bool cmp(SinhVien &a, SinhVien &b){
    return a.ten < b.ten;
}

void sap_xep(SinhVien a[], int n){
    sort(a, a + n, cmp);
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
	return 0;
}
