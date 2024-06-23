#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		string s1; cin >> s1;
		bool kt = true;
		int l = 0, r = s1.size() - 1;
		while(l < r){
			if(s1[l] != s1[r]){
				kt = false;
				break;
			}
			l ++;
			r --;
		}
		if(kt){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
	
}
