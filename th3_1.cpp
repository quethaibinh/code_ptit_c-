#include<bits/stdc++.h>

using namespace std;

int k1 = 1, k2 = 1;

struct TheLoai{
    string ma, ten;
};

struct Phim{
    string ma, ten, ngay, tl, mtl;
    int tap;
};

void nhap1(TheLoai &a){
    a.ma += "TL";
    int x = 3 - to_string(k1).size();
    while(x --){
        a.ma += "0";
    }
    a.ma += to_string(k1);
    k1 ++;
    scanf("\n");
    getline(cin, a.ten);
}

void nhap2(Phim &a){
    a.ma += "P";
    int x = 3 - to_string(k2).size();
    while(x --){
        a.ma += "0";
    }
    a.ma += to_string(k2);
    k2 ++;
    cin >> a.mtl >> a.ngay;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.tap;
}

bool cmp(Phim &a, Phim &b){
    if(a.ngay == b.ngay){
        if(a.ten == b.ten){
            return a.tap < b.tap;
        }
        else{
            return a.ten < b.ten;
        }
    }
    else{
        string d1 = a.ngay.substr(0, 1);
        string d2 = b.ngay.substr(0, 1);
        string m1 = a.ngay.substr(3, 4);
        string m2 = b.ngay.substr(3, 4);
        string y1 = a.ngay.substr(6, 9);
        string y2 = b.ngay.substr(6, 9);
        if(y1 == y2){
            if(m1 == m2){
                return d1 < d2;
            }
            else{
                return m1 < m2;
            }
        }
        return y1 < y2;
    }
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n, m;
    cin >> n >> m;
    TheLoai a[n];
    Phim b[m];
    for(int i = 0; i < n; i ++){
        nhap1(a[i]);
    }
    for(int i = 0; i < m; i ++){
        nhap2(b[i]);
        for(int j = 0; j < n; j ++){
            if(b[i].mtl == a[j].ma){
                b[i].tl = a[j].ten;
                break;
            }
        }
    }
    sort(b, b + m, cmp);
    for(int i = 0; i < m; i ++){
        cout << b[i].ma << ' ' << b[i].tl << ' ' << b[i].ngay << ' ' << b[i].ten << ' ' << b[i].tap << '\n';
    }

    return 0;
}
