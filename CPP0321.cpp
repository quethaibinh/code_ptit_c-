#include<bits/stdc++.h>

using namespace std;

void dao(string &s){
    int l = 0, r = s.size() - 1;
    while(l < r){
        swap(s[l], s[r]);
        l ++; r --;
    }
}

string hieu(string a, string b){
    string c;
    dao(a);
    dao(b);
    
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

    }
	
	return 0;
}
