#include<bits/stdc++.h>

using namespace std;

struct mp{
    string ten, ma;
};

struct phim{
    string maphim, matl, tl, ngay, ten;
    int tap;
};

void nhapmp(mp &a){
    getline(cin, a.ten);
}

void nhapp(phim &a){
    cin >> a.matl >> a.ngay;
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.tap;
}

bool cmp(phim a, phim b){
    string nam1 = "";
    string nam2 = "";
    for(int i = 6; i < 10; i ++){
        nam1 += a.ngay[i];
        nam2 += b.ngay[i];
    }
    string thang1 = "";
    string thang2 = "";
    for(int i = 3; i < 5; i ++){
        thang1 += a.ngay[i];
        thang2 += b.ngay[i];
    }
    string ngay1 = "";
    string ngay2 = "";
    for(int i = 0; i < 2; i ++){
        ngay1 += a.ngay[i];
        ngay2 += b.ngay[i];
    }
    if(nam1 != nam2){
        return nam1 < nam2;
    }else{
        if(thang1 != thang2){
            return thang1 < thang2;
        }else{
            return ngay1 < ngay2;
        }
    }
    return a.ten < b.ten;
    return a.tap > b.tap;
}

void swap(phim *a, phim *b){
    phim tmp = *a;
    *a = *b;
    *b = tmp;
}

void sapxep(phim a[100], int n){
    for(int i = 0; i < n; i ++){
        int min = i;
        for(int j = i + 1; j < n; j ++){
            if(cmp(a[j], a[min])){
                min = j;
            }
        }
        swap(a[min], a[i]);
    }
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n, m;
    cin >> n >> m;
    mp b[n];
    phim a[m];
    getchar();
    for(int i = 0; i < n; i ++){
        nhapmp(b[i]);
        b[i].ma = "TL" ;
        int x = 3 - to_string(i + 1).size();
        while(x --){
            b[i].ma += '0';
        }
        b[i].ma += to_string(i + 1); 
    }
    for(int i = 0; i < m; i ++){
        nhapp(a[i]);
        for(int j = 0; j < n; j ++){
            if(a[i].matl == b[j].ma){
                a[i].tl = b[j].ten;
                break;
            }
        }
        a[i].maphim = "P";
        int x = 3 - to_string(i + 1).size();
        while(x --){
            a[i].maphim += '0';
        }
        a[i].maphim += to_string(i + 1); 
    }
    // sort(a, a + n, cmp);
    sapxep(a, m);
    for(int i = 0; i < m; i ++){
        cout << a[i].maphim << ' ' << a[i].tl << ' ' << a[i].ngay << ' ' << a[i].ten << ' ' << a[i].tap << '\n';
    }
    
	return 0;
	
}