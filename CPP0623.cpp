#include<bits/stdc++.h>

using namespace std;

class SinhVien;
map<string, vector<SinhVien>> mp;

class SinhVien{
    private:
        string ma, ten, lop, em;
    public:
        string getlop(){
            return lop.substr(1, 2);
        }
        friend istream &operator >> (istream &is, SinhVien &a){
            is >> a.ma;
            scanf("\n");
            getline(is, a.ten);
            is >> a.lop >> a.em;
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
	
    int n;
    cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
        mp[a[i].getlop()].push_back(a[i]);
    }
    // for(int i = 0; i < n; i ++){
    //     cout << a[i];
    // }
    int q;
    cin >> q;
    string b[q];
    for(int i = 0; i < q; i ++){
        string s;
        cin >> s;
        b[i] = s.substr(2, 3);
    }
    for(int i = 0; i < q; i ++){
        cout << "DANH SACH SINH VIEN KHOA 20" << b[i] << ":\n";
        for(auto x : mp){
            if(x.first == b[i]){
                for(auto y : x.second){
                    cout << y;
                }
            }
        }
    }
    
	return 0;
	
}
