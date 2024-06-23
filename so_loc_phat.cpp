#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		string s; cin >> s;
		bool kt = true;
		for(int i = 0; i < s.size(); i ++){
			if(s[i] != '0' && s[i] != '8' && s[i] != '6'){
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
