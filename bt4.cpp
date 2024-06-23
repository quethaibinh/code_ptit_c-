#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string ma, ten;
        int st;
    public:
        string getten(){
            return ten;
        }
        friend istream &operator >> (istream &is, SinhVien &a){
            is >> a.ma;
            scanf("\n");
            getline(is, a.ten);
            is >> a.st;
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien a){
            os << a.ma << ' ' << a.ten << ' ' << a.st;
            return os;
        }
};

bool cmp(SinhVien &a, SinhVien &b){
    return a.getten() < b.getten();
}

int main(){
	
	// #ifndef ONLINE_JUDGE
    freopen("MONHOC.in", "r", stdin);
    // freopen("output.txt", "w", stdout);
	// #endif 
	
	int n;
    cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i ++){
        cout << a[i] << '\n';
    }
	
}
