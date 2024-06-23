#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
    string ten;
    double diem, diemcuoi;
    string dt;
    int kv;
    string TrangThai, ma;
};

void ChuanHoa(SinhVien &a){
    string res = "";
    stringstream ss(a.ten);
    string token;
    while(ss >> token){
        res += toupper(token[0]);
        for(int i = 1; i < token.size(); i ++){
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.size() - 1);
    a.ten = res;
}

void di(SinhVien &a){
    a.diemcuoi = a.diem;
    if(a.kv == 1){
        a.diemcuoi += 1.5;
    }
    if(a.kv == 2){
        a.diemcuoi += 1;
    }
    if(a.dt != "Kinh"){
        a.diemcuoi += 1.5;
    }
    if(a.diemcuoi < 20.5){
        a.TrangThai= "Truot";
    }else{
        a.TrangThai = "Do";
    }
}

void nhap(SinhVien &a){
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.diem;
    cin.ignore(); 
    getline(cin, a.dt); 
    cin >> a.kv;
}


bool cmp(SinhVien &a, SinhVien &b){
    if(a.diemcuoi == b.diemcuoi){
        return a.ma < b.ma;
    }
    else{
        return a.diemcuoi > b.diemcuoi;
    }
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    SinhVien a[n];
    // getchar();
    for(int i = 0; i < n; i ++){
        nhap(a[i]);
        ChuanHoa(a[i]);
        di(a[i]);
        a[i].ma = "TS";
        int x = 2 - to_string(i + 1).size() ;
        while(x --){
            a[i].ma += '0';
        }
        a[i].ma += to_string(i + 1);
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i ++){
        cout  << a[i].ma << ' ' << a[i].ten << ' ';
        cout << fixed << setprecision(1) << a[i].diemcuoi << ' ';
        cout << a[i].TrangThai << '\n';
    }

	return 0;
	
}