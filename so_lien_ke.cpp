#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		string s; cin >> s;
		bool kt = true;
		for(int i = 0; i < s.size() - 1; i ++){
			if(s[i + 1] != s[i] + 1 && s[i + 1] != s[i] - 1){
				kt = false;
				break;
			}
		}
		if(kt){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
	
}
