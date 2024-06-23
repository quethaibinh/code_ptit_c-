#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
    int stt;
    string ma, ten, lop, em, dn;
};

void nhap(SinhVien &a){
    cin >> a.ma;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.lop >> a.em >> a.dn;
}

void in(vector<SinhVien> a){
    for(int i = 0; i < a.size(); i ++){
        cout << a[i].stt << ' ' << a[i].ma << ' ' << a[i].ten << ' ' << a[i].lop << ' ' << a[i].em << ' ' << a[i].dn << '\n';
    }
}

bool cmp(SinhVien &a, SinhVien &b){
    return a.ma < b.ma;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i ++){
        nhap(ds[i]);
        ds[i].stt = i + 1;
    }
    int q;
    cin >> q;
    string dngh[q];
    vector<vector<SinhVien>> v(q);
    for(int i = 0; i < q; i ++){
        cin >> dngh[i];
        for(auto x : ds){
            if(x.dn == dngh[i]){
                v[i].push_back(x);
            }
        }
        sort(v[i].begin(), v[i].end(), cmp);
    }
    for(int i = 0; i < q; i ++){
        in(v[i]);
    }
	
	return 0;
}
