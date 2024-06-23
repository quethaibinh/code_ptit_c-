#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string ma, ten, lop, em;
    public:
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
            is >> a.lop >> a.em;
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien a){
            os << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.em << '\n';
            return os;
        }
};

bool cmp(SinhVien &a, SinhVien &b){
    // if(a.getlop() != b.getlop()){
    //     return a.getlop() < b.getlop();
    // }
    return a.getma() < b.getma();
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	SinhVien ds[1005];
    int n;
    while(cin >> ds[n]){
        n ++;
    }
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i ++){
        cout << ds[i];
    }
    return 0;
	
}
