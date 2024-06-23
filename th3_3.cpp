#include<bits/stdc++.h>

using namespace std;

class DT{
    public:
        string ten, so, ngay;
        friend istream &operator >> (istream &is, DT &a){
            scanf("\n");
            getline(is, a.ten);
            is >> a.so;
            return is;
        }
        friend ostream &operator << (ostream &os, DT a){
            os << a.ten << ": " << a.so << ' ' << a.ngay << '\n';
        }
};

class Ngay{
    public:
        string ngay;
        vector<DT> v;
        friend istream &operator >> (istream &is, Ngay &a){
            scanf("\n");
            getline(is, a.ngay);
            DT b;
            while(cin >> b){
                b.ngay = a.ngay.substr(5, 14);
                a.v.push_back(b);
            }
            return is;
        }
};

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    Ngay a;
    vector<DT> v1;
    while(cin >> a){
        for(int i = 0; i < a.v.size(); i ++){
            v1.push_back(a.v[i]);
        }
    }
    for(int i = 0; i < v1.size(); i ++){
        cout << v1[i];
    }
	
	return 0;
}
