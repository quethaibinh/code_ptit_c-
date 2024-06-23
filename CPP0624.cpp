#include<bits/stdc++.h>

using namespace std;
#define ll long long

class SinhVien;

string DinhNghia(string s){
    if(s == "DCCN"){
        return "CONG NGHE THONG TIN";
    }
    if(s == "DCKT"){
        return "KE TOAN";
    }
    if(s == "DCAT"){
        return "AN TOAN THONG TIN";
    }
    if(s == "DCVT"){
        return "VIEN THONG";
    }
    if(s == "DCDT"){
        return "DIEN TU";
    }
}

class SinhVien{
    public:
        string ma, ten, lop, em, nganh;
        string getdn(){
            string a = ma.substr(3, 4);
            return a;
        }
        friend istream &operator >> (istream &is, SinhVien &a){
            is >> a.ma;
            scanf("\n");
            getline(is, a.ten);
            is >> a.lop >> a.em;
            a.nganh = DinhNghia(a.getdn());
            // scanf("\n");
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien a){
            os << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.em << '\n';
            return os;
        }
};

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    SinhVien a[1005];
    map<string, vector<SinhVien>> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
        if(a[i].lop[0] == 'E' && (a[i].nganh == "CONG NGHE THONG TIN" || a[i].nganh == "AN TOAN THONG TIN")){
            continue;
        }
        mp[a[i].nganh].push_back(a[i]); 
    }
    // for(auto x : mp){
    //     cout << x.first << '\n';
    //     for(int i = 0; i < x.second.size(); i ++){
    //         cout << x.second[i];
    //     }
    // }
    int q;
    cin >> q;
    vector<string> v(q);
    for(int i = 0; i < q; i ++){
        scanf("\n");
        getline(cin, v[i]);
        for(int j = 0; j < v[i].size(); j ++){
            v[i][j] = toupper(v[i][j]);
        }
    }
    for(int i = 0; i < v.size(); i ++){
        for(auto x : mp){
            if(x.first == v[i]){
                cout << "DANH SACH SINH VIEN NGANH " << v[i] << ":\n";
                for(int i = 0; i < x.second.size(); i ++){
                    cout << x.second[i];
                }
            }
        }
    }


    return 0;
}
