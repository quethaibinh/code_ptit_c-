#include<bits/stdc++.h>

using namespace std;

struct tgian{
    int gio, phut, giay;
};

void nhap(tgian &a){
    cin >> a.gio >> a.phut >> a.giay;
}

void in(tgian a){
    cout << a.gio << ' ' << a.phut << ' ' << a.giay <<'\n';
}

bool cmp(tgian &a, tgian &b){
    if(a.gio == b.gio){
        if(a.phut == b.phut){
            return a.giay < b.giay;
        }
        return a.phut < b.phut;
    }
    return a.gio < b.gio;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    tgian a[n];
    for(int i = 0; i < n; i ++){
        nhap(a[i]);
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i ++){
        in(a[i]);
    }
	
	return 0;
}
