#include<bits/stdc++.h>

using namespace std;
#define ll long long

class GiangVien;
map<string, vector<GiangVien>> mp;

int k = 1;
class GiangVien{
    public:
        string ma, ten, mon, ten_thuong, mont;
        GiangVien(){
            ma = "GV";
            int x = 2 - to_string(k).size();
            while(x > 0){
                ma += "0";
                -- x;
            }
            ma += to_string(k ++);
        }
        friend istream &operator >> (istream &is, GiangVien &a){
            scanf("\n");
            getline(is, a.ten);
            scanf("\n");
            getline(is, a.mon);
            string res1;
            for(int i = 0; i < a.ten.size(); i ++){
                res1 += tolower(a.ten[i]);
            }
            a.ten_thuong = res1;
            string res, s = a.mon, token;
            stringstream ss(s);
            while(ss >> token){
                res += toupper(token[0]);
            }
            a.mont = res;
            return is;
        }
        friend ostream &operator << (ostream &os, GiangVien a){
            os << a.ma << ' ' << a.ten << ' ' << a.mont << '\n';
            return os;
        }
};

bool check(string s, string a){
    // cout << s.size() << '\n';
    int x = s.size();
    for(int i = 0; i < a.size(); i ++){
        string sc = a.substr(i, x);
        // cout << sc << ' ';
        if(sc == s){
            return true;
        }
    }
    // cout << '\n';
    return false;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    GiangVien a[n];
    for(int i = 0; i < n; i ++) cin >> a[i];
    int q;
    cin >> q;
    vector<string> v1, v2;
    for(int i = 0; i < q; i ++){
        string s2;
        cin >> s2;
        v1.push_back(s2);
        string s;
        for(int j = 0; j < s2.size(); j ++){
            s += tolower(v1[i][j]);
        }
        v2.push_back(s);
    }
    // for(int i = 0; i < n; i ++){
    //     cout << a[i] << '\n';
    // }
    for(int i = 0; i < q; i ++){
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << v1[i] << ":\n";
        for(int j = 0; j < n; j ++){
            if(check(v2[i], a[j].ten_thuong)){
                cout << a[j];
            }
        }
    }

    return 0;
}
