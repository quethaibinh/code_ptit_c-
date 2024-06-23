#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    ll a1 = a, b1 = b;
    return (a / gcd(a1, b1)) * b;
}


class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll, ll);
        void rutgon();
        friend istream &operator >> (istream &is, PhanSo &a);
        friend ostream &operator << (ostream &os, PhanSo a);
        friend PhanSo operator + (PhanSo a, PhanSo b);
};

void PhanSo :: rutgon(){
    ll a = this->tu, b = this->mau;
    ll uc = gcd(a, b);
    this->tu /= uc;
    this->mau /= uc;
}

PhanSo :: PhanSo(ll tu, ll mau){
    this->tu = tu;
    this->mau = mau; 
}

istream &operator >> (istream &is, PhanSo &a){
    is >> a.tu >> a.mau;
    return is;
}

ostream &operator << (ostream &os, PhanSo a){
    a.rutgon();
    os << a.tu << '/' << a.mau;
    return os;
}

PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo c(1, 1);
    ll lcm1 = lcm(a.mau, b.mau);
    c.tu = (a.tu * (lcm1 / a.mau)) + (b.tu * (lcm1 / b.mau));
    c.mau = lcm1;
    return c;
}


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;


	return 0;
	
}
