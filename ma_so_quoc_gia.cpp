#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		string s; cin >> s;
		bool kt = false;
		int dem = 3;
		for(int i = 0; i < s.size(); i ++){
			if(s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4'){
				kt = true;
			}
			if(kt && dem >= 1){
				-- dem;
				continue;
			}
			cout << s[i];
		}
		cout << endl;
	}
	
	return 0;
	
}
