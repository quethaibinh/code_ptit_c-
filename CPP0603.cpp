#include<bits/stdc++.h>

using namespace std;

#define ll long long

class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll, ll);
        friend istream &operator >> (istream &is, PhanSo &p);
        friend ostream &operator << (ostream &os, PhanSo p);
        void rutgon();
};

PhanSo :: PhanSo(ll tu, ll mau){
    this->tu = tu;
    this->mau = mau;
}

istream &operator >> (istream &is, PhanSo &p){
    is >> p.tu >> p.mau;
    return is;
}

ostream &operator << (ostream &os, PhanSo p){
    os << p.tu << '/' << p.mau;
    return os;
}

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

void PhanSo :: rutgon(){
    ll x = tu, y = mau;
    ll gc = gcd(x, y);
    tu /= gc;
    mau /= gc;
}


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;


	return 0;
	
}
