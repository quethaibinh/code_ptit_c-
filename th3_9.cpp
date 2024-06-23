#include<bits/stdc++.h>

using namespace std;

string ChuanHoa(string ns){
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

void ChuanHoaTen(string &a){
    string token, s;
    stringstream ss(a);
    while(ss >> token){
        token[0] = toupper(token[0]);
        for(int i = 1; i < token.size(); i ++){
            token[i] = tolower(token[i]);
        }
        s += token + " ";
    }
    s.erase(s.size() - 1);
    a = s;
}

class SinhVien{
    private:
        string ma, ten, lop, ns;
        float gpa;
    public:
        SinhVien();
        friend istream& operator >> (istream &is, SinhVien &a);
        friend ostream& operator << (ostream &os, SinhVien a); 
};

SinhVien :: SinhVien(){
    ma = "B20DCCN001";
    ten = "";
    lop = "";
    ns = "";
    gpa = 0;
}

istream& operator >> (istream &is, SinhVien &a){
    getline(is, a.ten);
    is >> a.lop >> a.ns >> a.gpa;
    return is;
}



ostream& operator << (ostream &os, SinhVien a){
    a.ns = ChuanHoa(a.ns);
    ChuanHoaTen(a.ten);
    os << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa;
    return os;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	SinhVien a;
    cin >> a;
    cout << a;
    return 0;


	return 0;
	
}
