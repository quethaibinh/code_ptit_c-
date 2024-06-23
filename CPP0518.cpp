#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
    string ma, ten, gioi, ns, diachi, mathue, nk;
};

int k = 1;
void nhap(NhanVien &a){
    a.ma = "";
    int x = 5 - to_string(k).size();
    while(x --){
        a.ma += '0';
    }
    a.ma += to_string(k);
    ++ k;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.gioi >> a.ns;
    scanf("\n");
    getline(cin, a.diachi);
    cin >> a.mathue >> a.nk;
    if(a.ns[2] != '/'){
        a.ns = "0" + a.ns;
    }
    if(a.ns[5] != '/'){
        a.ns.insert(3, "0");
    }
}

void inds(NhanVien a[], int n){
    for(int i = 0; i < n; i ++){
        cout << a[i].ma << ' ' << a[i].ten << ' ' << a[i].gioi << ' ' << a[i].ns << ' ' << a[i].diachi << ' ' << a[i].mathue << ' ' << a[i].nk << '\n';
    }
}

bool cmp(NhanVien &a, NhanVien &b){
    string y1 = a.ns.substr(6, 9);
    string y2 = b.ns.substr(6, 9);
    string m1 = a.ns.substr(0, 1);
    string m2 = b.ns.substr(0, 1);
    string d1 = a.ns.substr(3, 4);
    string d2 = b.ns.substr(3, 4);
    if(y1 == y2){
        if(m1 == m2){
            return d1 < d2;
        }
        else{
            return m1 < m2;
        }
    }
    else{
        return y1 < y2;
    }
}

void sapxep(NhanVien ds[], int n){
    sort(ds, ds + n, cmp);
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
	
}
