#include<bits/stdc++.h>

using namespace std;
#define ll long long;

struct SinhVien{
    string hoten, lop, ngaysinh;
    float GPA;
};

void nhap(SinhVien ds[50], int n){
    for(int i = 1; i <= n; i ++){
        cin.ignore();
        getline(cin, ds[i].hoten);
        cin >> ds[i].lop >> ds[i].ngaysinh >> ds[i].GPA;
    }
}

void ChuanHoa(string &a){
    if(a[2] != '/'){
		a = "0" + a;
	}
	if(a[5] != '/'){
		string b = "0000000000";
		int i;
		int cnt = 0;
		for(int i = 0; i <= 2; i ++){
			b[cnt] = a[i];
			cnt ++;
		}
		cnt ++;
		for(int i = 3; i < a.size(); i ++){
			b[cnt] = a[i];
			cnt ++;
		}
		a = b;
	}
}

void in(SinhVien ds[50], int n){
    for(int i = 1; i <= n; i ++){
        ChuanHoa(ds[i].ngaysinh);
        cout << "B20DCCN";
        if(i / 10 == 0){
            cout << "00" << i << ' ';
        }else{
            cout << "0" << i << ' ';
        }
        cout << ds[i].hoten << ' ' << ds[i].lop << ' ' << ds[i].ngaysinh << ' ' << fixed << setprecision(2) << ds[i].GPA << '\n';
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 

    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;


    return 0;

}