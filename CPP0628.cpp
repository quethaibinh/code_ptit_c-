#include<bits/stdc++.h>

using namespace std;
#define ll long long

class DoanhNghiep{
    public:
        string ma, ten;
        int sol;
        friend istream &operator >> (istream &is, DoanhNghiep &a){
            scanf("\n");
            getline(is, a.ma);
            scanf("\n");
            getline(is, a.ten);
            is >> a.sol;
            return is;
        }
        friend ostream &operator << (ostream &os, DoanhNghiep a){
            os << a.ma << ' ' << a.ten << ' ' << a.sol << '\n';
            return os;
        }
};

bool cmp(DoanhNghiep &a, DoanhNghiep &b){
    if(a.sol == b.sol){
        return a.ma < b.ma;
    }
    return a.sol > b.sol;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    DoanhNghiep a[n];
    for(int i = 0; i < n; i ++) cin >> a[i];
    sort(a, a + n, cmp);
    int q;
    cin >> q;
    vector<pair<int, int>> v;
    for(int i = 0; i < q; i ++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    for(int k = 0; k < q; k ++){
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << v[k].first << " DEN " << v[k].second << " SINH VIEN:\n";
        for(int i = 0; i < n; i ++){
            if(a[i].sol >= v[k].first && a[i].sol <= v[k].second){
                cout << a[i];
            }
        }
    }

    return 0;
}
