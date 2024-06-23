#include<bits/stdc++.h>

using namespace std;
#define ll long long;

struct SinhVien{
    string msv, hoten, lop, ngaysinh;
    float GPA;
};

void nhap(SinhVien ds[50], int n){
    for(int i = 1; i <= n; i ++){
        ds[i].msv = "B20DCCN";
        if(i / 10 == 0){
            ds[i].msv += ("00" + to_string(i));
        }else{
            ds[i].msv += ("0" + to_string(i));
        }
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

void Chuan(string &s){
    if(s[0] >= 'a' && s[0] <= 'z'){
        s[0] -= 32;
    }
    for(int i = 1; i < s.size(); i ++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
}

void ChuanHoaTen(string &s){
    string s1 = s, s2[10], s3;
    string token;
    stringstream ss(s1);
    int cnt = 0;
    while(ss >> token){
        s2[cnt] = token;
        cnt ++;
    }
    for(int i = 0; i < cnt; i ++){
        if(i == cnt - 1){
            Chuan(s2[i]);
            s3 += s2[i];
            break;
        }
        Chuan(s2[i]);
        s3 += (s2[i] + " ");
    }
    
    s = s3;
}

void swap1(SinhVien *a, SinhVien *b){
    SinhVien tmp = *a;
    *a = *b;
    *b = tmp;
}

void sapxep(SinhVien ds[50], int n){
    for(int i = 1; i <= n; i ++){
        int max_pos = i;
        for(int j = i + 1; j <= n; j ++){
            if(ds[j].GPA > ds[max_pos].GPA){
                max_pos = j;
            }
        }
        swap1(&ds[i], &ds[max_pos]);
    }
}

void in(SinhVien ds[50], int n){
    for(int i = 1; i <= n; i ++){
        ChuanHoaTen(ds[i].hoten);
        ChuanHoa(ds[i].ngaysinh);
        cout << ds[i].msv << ' ' << ds[i].hoten << ' ' << ds[i].lop << ' ' << ds[i].ngaysinh << ' ';
        printf("%.2f\n", ds[i].GPA);
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
    sapxep(ds,N);
    in(ds, N);
    return 0;


    

}