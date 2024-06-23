#include<bits/stdc++.h>

using namespace std;
#define ll long long

int k = 1;
class GiangVien{
    public:
        string ma, ten, bo_mon, viettat_bm, t;
        GiangVien(){
            ten = ""; bo_mon = ""; viettat_bm = ""; t = "";
            ma = "GV";
            int x = 2 - to_string(k).size();
            while(x --){
                ma += '0';
                // -- x;
            }
            ma += to_string(k);
            k ++;
        }
        void tencuoi(string &s){
            string m = ten;
            vector<string> v;
            string token;
            stringstream ss(m);
            while(ss >> token){
                v.push_back(token);
            }
            s = v[v.size() - 1];
        }
        void viettat(string &res){
            string s = bo_mon;
            string token;
            stringstream ss(s);
            while(ss >> token){
                res += toupper(token[0]);
            }
        }
        friend istream &operator >> (istream &is, GiangVien &a){
            scanf("\n");
            getline(is, a.ten);
            scanf("\n");
            getline(is, a.bo_mon);
            a.viettat(a.viettat_bm);
            a.tencuoi(a.t);
            return is;
        }
        friend ostream &operator << (ostream &os, GiangVien a){
            os << a.ma << ' ' << a.ten << ' ' << a.viettat_bm << '\n';
            return os;
        }
};

bool cmp(GiangVien &a, GiangVien &b){
    if(a.t == b.t){
        return a.ma < b.ma;
    }
    return a.t < b.t;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    GiangVien a[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i ++){
        cout << a[i];
    }

    return 0;
}
