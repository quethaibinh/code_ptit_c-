#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
	    string ma, ten, lop, em, sdt;
	public:
	    SinhVien(){
			ma = ""; ten = ""; lop = ""; em = "";
			sdt = "0"; 
		}
		string getlop(){
			return lop;
		}
		string getma(){
			return ma;
		}
		friend istream &operator >> (istream &is, SinhVien &a){
			is >> a.ma;
			scanf("\n");
			getline(is, a.ten);
			is >> a.lop >> a.em >> a.sdt;
			return is;
		}
        friend ostream &operator << (ostream &os, SinhVien a){
			os << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.em << ' ' << a.sdt << "\n";
			return os;
		}
};

bool cmp(SinhVien &a, SinhVien &b){
	if(a.getlop() == b.getlop()){
		return a.getma() < b.getma();
	}
	return a.getlop() < b.getlop();
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    class SinhVien a[1000];
	int n;
    while(cin >> a[n]){
		++ n;
	}
	sort(a, a + n, cmp);
	for(auto x : a){
		cout << x;
	}
	
	return 0;
}
