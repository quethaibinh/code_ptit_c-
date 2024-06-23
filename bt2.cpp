#include<bits/stdc++.h>

using namespace std;

void ChuanHoa(string &a){
    if(a[2] != '/'){
        a = "0" + a;
    }
    if(a[5] != '/'){
        a.insert(3, "0");
    }
}

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
        friend istream &operator >> (istream &is, SinhVien &a){
            scanf("\n");
            getline(is, a.ten);
            is >> a.lop >> a.ns >> a.gpa;
            ChuanHoa(a.ns);
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien a){
            cout << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa;
            return os;
        }
};

int main(){
	
	// #ifndef ONLINE_JUDGE
    freopen("SV.in", "r", stdin);
    // freopen("output.txt", "w", stdout);
	// #endif 
	
	int n;
    cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i ++){
        cout << a[i] << '\n';
    }

	return 0;
}
