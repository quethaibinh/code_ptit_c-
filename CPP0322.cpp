#include<bits/stdc++.h>

using namespace std;
#define ll long long



void dao(string &a, int n){
    int l = 0, r = n - 1;
    while(l < r){
        swap(a[l ++], a[r --]);
    }
}

string tong(string a, string b){
    string to = "";
    dao(a, a.size());
    dao(b, b.size());
    int du = 0;
    int n = min(a.size(), b.size());
    int tmp = 0;
    for(int i = 0; i < n; i ++){
        if((a[i] - '0') + (b[i] - '0') + du > 9){
            to[tmp ++] = ((a[i] - '0') + (b[i] - '0') + du) % 10 + '0';
            du = 1;
        }
        else{
            to[tmp ++] = (a[i] - '0') + (b[i] - '0') + du + '0';
            du = 0;
        }
    }
    if(n != a.size()){
        for(int i = b.size(); i < a.size(); i ++){
            to[tmp ++] = a[i] + du;
            du = 0;
        }
    }
    else if(n != b.size()){
        for(int i = a.size(); i < b.size(); i ++){
            to[tmp ++] = b[i] + du;
            du = 0;
        }
    }
    else{
        if(du == 1){
            to[tmp ++] = du + '0';
        }
    }
    dao(to, tmp);
    return to;
    // return stoll(to);
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int t;
    cin >> t;
    while(t --){
        string a, b;
        cin >> a >> b;
        cout << tong(a, b);
        cout  << '\n';
    }
	
	return 0;
}
