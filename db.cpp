#include<bits/stdc++.h>

using namespace std;

class dab{
    public:
        string ten, sdt, ngay;
        friend istream &operator >> (istream &is, dab &a){
            scanf("\n");
            getline(is, a.ten);
            cin >> a.sdt;
            return is;
        }
        friend ostream &operator << (ostream &os, dab a){
            os << a.ten << ' ' << a.ngay << ' ' << a.sdt << '\n';
            return os;
        }
};


// bool cmp(dab &a, dab &b){
// 	string s1 = a.ten, s2 = b.ten, token1, token2;
// 	vector<string> v1, v2;
// 	stringstream ss1(s1);
// 	while(ss1 >> token1){
// 		v1.push_back(token1);
// 	}
// 	stringstream ss2(s2);
// 	while(ss2 >> token2){
// 		v2.push_back(token2);
// 	}
// 	if(v1[v1.size() - 1] == v2[v2.size() - 1]){
// 		return v1[v1.size() - 2] < v2[v2.size() - 2];
// 	}
// 	return v1[v1.size() - 1] < v2[v2.size() - 1];
// }

int main(){

    freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
    
    string s;
    vector<dab> v;
    // scanf("\n");
    while(getline(cin, s)){
        scanf("\n");
    	dab a;
    	while(cin >> a){
            a.ngay = s.substr(5);
            cout << a;
            v.push_back(a);
        }
	}
	// sort(v.begin(), v.end(), cmp);
	// for(int i = 0; i < v.size(); i ++){
	// 	in(v[i]);
	// }
	
	return 0;
}