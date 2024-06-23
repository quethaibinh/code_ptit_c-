#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string ma, ten, lop, ns;
        float gpa;
    public:
        SinhVien();
        float getgpa();
        friend istream &operator >> (istream &is, SinhVien &a);
        friend ostream &operator << (ostream &os, SinhVien a);
};

float SinhVien :: getgpa(){
    return gpa;
}

bool cmp(SinhVien a, SinhVien b){
    return a.getgpa() >= b.getgpa();
}

int k = 1;
SinhVien :: SinhVien(){
    ma = "B20DCCN";
    int x = 3 - to_string(k).size();
    while(x --){
        ma += '0';
    }
    ma += to_string(k);
    ten = "";
    lop = "";
    ns = "";
    gpa = 0;
    ++ k;
}

string ChuanHoaNs(string ns){
    string b = "0000000000";
    if(ns[0] != '0'){
        ns = '0' + ns;
    }
    int cnt = 0;
    for(int i = 0; i < ns.size(); i ++){
        if(i == 3 && ns[5] != '/'){
            cnt ++;
        }
        b[cnt] = ns[i];
        cnt ++;
    }
    return b;
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

istream &operator >> (istream &is, SinhVien &a){
    is.ignore();
    getline(is, a.ten);
    is >> a.lop >> a.ns >> a.gpa;
    ChuanHoaTen(a.ten);
    a.ns = ChuanHoaNs(a.ns);
    return is;
}

ostream &operator << (ostream &os, SinhVien a){
    os << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa << '\n';
    return os;
}
void sapxep(SinhVien ds[], int n){
    sort(ds, ds + n, cmp);
}


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;


	return 0;
	
}
