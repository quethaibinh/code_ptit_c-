#include<bits/stdc++.h>

using namespace std;

int k = 1;

class NhanVien{
    private:
        string ma, ten, gt, ns, dc, mt, nk;
    public:
        NhanVien(){
            ma = "";
            int x = 5 - to_string(k).size();
            while(x --){
                ma += '0';
            }
            ma += to_string(k);
            ++ k;
            ten = ""; gt = ""; ns = ""; dc = ""; mt = ""; nk = "";
        }
        string getns(){
            return ns;
        }
        void ChuanHoaNS(){
            if(ns[2] != '/'){
                ns = "0" + ns;
            }
            if(ns[5] != '/'){
                ns.insert(3, "0");
            }
        }
        void ChuanHoaNK(){
            if(nk[2] != '/'){
                nk = "0" + nk;
            }
            if(nk[5] != '/'){
                nk.insert(3, "0");
            }
        }
        friend istream &operator >> (istream &is, NhanVien &a){
            scanf("\n");
            getline(is, a.ten);
            cin >> a.gt >> a.ns;
            scanf("\n");
            getline(is, a.dc);
            cin >> a.mt >> a.nk;
            a.ChuanHoaNS();
            a.ChuanHoaNK();
            return is;
        }
        friend ostream &operator << (ostream &os, NhanVien a){
            os << a.ma << ' ' << a.ten << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.mt << ' ' << a.nk << '\n';
            return os;
        }
};

bool cmp(NhanVien &a, NhanVien &b){
    string n1=a.getns().substr(6,4);
	string n2=b.getns().substr(6,4);
	string t1=a.getns().substr(3,2);
	string t2=b.getns().substr(3,2);
	string nn1=a.getns().substr(0,2);
	string nn2=b.getns().substr(0,2);
	if(n1==n2){
		if(nn1==nn2) return t1<t2;
		return nn1<nn2;
	}
	return n1<n2;
}

void sapxep(NhanVien a[], int n){
    sort(a, a + n, cmp);
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
	
}
