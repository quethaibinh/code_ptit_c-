#include<bits/stdc++.h>

using namespace std;

struct hoso{
    string ten, ns;
};

void nhap(hoso &a){
    cin >> a.ten >> a.ns;
}

bool cmp(hoso &a, hoso &b){
    string y1 = a.ns.substr(6, 9);
    string y2 = b.ns.substr(6, 9);
    string m1 = a.ns.substr(3, 4);
    string m2 = b.ns.substr(3, 4);
    string d1 = a.ns.substr(0, 1);
    string d2 = b.ns.substr(0, 1);
    if(y1 == y2){
        if(m1 == m2){
            return d1 < d2;
        }
        return m1 < m2;
    }
    return y1 < y2;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    hoso a[n];
    for(int i = 0; i < n; i ++){
        nhap(a[i]);
    }
    sort(a, a + n, cmp);
    cout << a[n - 1].ten << '\n'; 
    cout << a[0].ten;
	
	return 0;
}
