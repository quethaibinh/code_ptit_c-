#include<bits/stdc++.h>

using namespace std;
#define ll long long

struct PhanSo{
    ll tu, mau;
};

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

void rutgon(PhanSo &a){
    ll tu = a.tu, mau = a.mau;
    ll uc = gcd(tu, mau);
    a.tu = a.tu / uc;
    a.mau = a.mau / uc;
    // if(a.tu < 0 && a.mau < 0){
    //     a.tu *= -1;
    //     a.mau *= -1;
    // }
    // if(a.mau < 0 && a.tu > 0){
    //     a.tu *= -1;
    //     a.mau *= -1;
    // }
    // if(a.tu == 0){
    //     a.mau = 0;
    // }
}

void process(PhanSo a, PhanSo b){
    rutgon(a);
    rutgon(b);
    ll bc = lcm(a.mau, b.mau);
    PhanSo c, d;
    c.tu = (a.tu * (bc / a.mau) + b.tu * (bc / b.mau)) * (a.tu * (bc / a.mau) + b.tu * (bc / b.mau));
    c.mau = bc * bc;
    rutgon(c);
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    rutgon(d);
    cout << c.tu << '/' << c.mau << ' ';
    cout << d.tu << '/' << d.mau << '\n';
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
	return 0;
}
