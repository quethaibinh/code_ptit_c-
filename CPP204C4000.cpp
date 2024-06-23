#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
    string ma = "N20DCCN001";
    string ten, lop, ns;
    float gpa;
};

void ChuanHoa(string &a){
    if(a[2] != '/'){
        a = "0" + a;
    }
    if(a[5] != '/'){
        a.insert(3, "0");
    }
}

void nhapThongTinSV(SinhVien &a){
    getline(cin, a.ten);
    cin >> a.lop >> a.ns >> a.gpa;
    ChuanHoa(a.ns);
}

void inThongTinSV(SinhVien a){
    cout << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
	
}
