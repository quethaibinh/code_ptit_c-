#include<bits/stdc++.h>

using namespace std;
#define ll long long

struct gv{
    string ma, ten, mon;
};

int k = 1;
void nhap1(gv &a){
    a.ma = "GV";
    int x = 2 - to_string(k).size();
    while(x --){
        a.ma += "0";
    }
    a.ma += to_string(k ++);
    scanf("\n");
    getline(cin, a.ten);
    scanf("\n");
    getline(cin, a.mon);
}

class GiangVien{
    public:
        int n, q;
        gv a1[100];
        vector<string> v;
        vector <string> v2;
        friend istream &operator >> (istream &is, GiangVien &a){
            is >> a.n;
            for(int i = 0; i < a.n; i ++){
                nhap1(a.a1[i]);
            }
            is >> a.q;
            for(int i = 0; i < a.q; i ++){
                scanf("\n");
                string s;
                getline(is, s);
                a.v.push_back(s);
                string s2 = a.v[i], token, res;
                stringstream ss(s2);
                while(ss >> token){
                    res += toupper(token[0]);
                }
                a.v2.push_back(res);
            }
            return is;
        }
        friend ostream &operator << (ostream &os, GiangVien a){
            for(int i = 0; i < a.q; i ++){
                os << "DANH SACH GIANG VIEN BO MON " << a.v2[i] << ":\n";
                for(int j = 0; j < a.n; j ++){
                    if(a.a1[j].mon == a.v[i]){
                        os << a.a1[j].ma << ' ' << a.a1[j].ten << ' ' << a.v2[i] << '\n';
                    }
                }
            }
            return os;
        }
};

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    GiangVien a;
    cin >> a;
    cout << a;

    return 0;
}
