#include<bits/stdc++.h>

using namespace std;

int k = 0;
class NhanVien{
    private:
        string ma, ten, gioi, ns, dc, mst, nk;
    public:
        NhanVien();
        friend istream &operator >> (istream &is, NhanVien &a){
            if(k == 0){
                getline(is, a.ten);
                is >> a.gioi >> a.ns;
                is.ignore();
                getline(is, a.dc);  
                is >> a.mst >> a.nk;
                ++ k;
            }
            else{
                // friend ostream &operator << (ostream &os, NhanVien a){
                // os << a.ma << ' ' << a.ten << ' ' << a.gioi << ' ' << a.ns << ' ' << a.dc << ' ' << a.mst << ' ' << a.nk << '\n';
                // return os;
                // }
                cout << a.ma << ' ' << a.ten << ' ' << a.gioi << ' ' << a.ns << ' ' << a.dc << ' ' << a.mst << ' ' << a.nk << '\n';
            }
            return is;
        }    
};

NhanVien :: NhanVien(){
    ma = "00001";
    ten = "";
    gioi = "";
    ns = "";
    dc = "";
    mst = "";
    nk = "";
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	NhanVien a;
    cin >> a;
    cout >> a;
    return 0;


	return 0;
	
}
