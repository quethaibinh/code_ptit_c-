#include<bits/stdc++.h>

using namespace std;

struct SoPhuc{
    double thuc, ao;
};

SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.thuc = (a.thuc + b.thuc) * (a.thuc + b.thuc) - (a.ao + b.ao) * (a.ao + b.ao);
    c.ao = 2 * (a.thuc + b.thuc) * (a.ao + b.ao);
    return c;
}

void hien_thi(SoPhuc c){
    cout << c.thuc << " + " << c.ao << "i";
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}

	return 0;
	
}
