#include<bits/stdc++.h>

using namespace std;

int k = 1;

class SinhVien{
    private:
        string ma, ten, lop, ns;
        float gpa;
    public:
        SinhVien(){
            ma = "B20DCCN";
            int x = 3 - to_string(k).size();
            while(x --){
                ma += '0';
            }
            ma += to_string(k);
            ++ k;
            ten = ""; lop = ""; ns = ""; gpa = 0;
        }
        void ChuanHoaNS();
        void ChuanHoaTen();
        friend istream &operator >> (istream &is, SinhVien &a){
            scanf("\n");
            getline(is, a.ten);
            cin >> a.lop >> a.ns >> a.gpa;
            a.ChuanHoaNS();
            a.ChuanHoaTen();
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien a){
            os << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa << '\n'; 
            return os;
        }
};

void SinhVien :: ChuanHoaNS(){
    if(ns[2] != '/'){
        ns = '0' + ns;
    }
    if(ns[5] != '/'){
        ns.insert(3, "0");
    }
}

void SinhVien :: ChuanHoaTen(){
    string res, token;
    stringstream ss(ten);
    while(ss >> token){
        token[0] = toupper(token[0]);
        for(int i = 1; i < token.size(); i ++){
            token[i] = tolower(token[i]);
        }
        res += token;
        res += ' ';
    }
    res.erase(res.size() - 1);
    ten = res;
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
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
	
}
