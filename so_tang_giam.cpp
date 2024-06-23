#include<bits/stdc++.h>

using namespace std;

int pow1(int n){
	int m = 1;
	for(int i = 0; i < n; i ++){
		m *= 10;
	}
	return m;
}


bool kt(int n){
//	string s = to_string(n);
//	if(s[1] == s[0]){
//		return false;
//	}
//	if(s[1] > s[0]){
//		for(int i = 1; i < s.size() - 1; i ++){
//			if(s[i] >= s[i + 1]){
//				return false;
//			}
//		}
//	}
//	if(s[1] < s[0]){
//		for(int i = 1; i < s.size() - 1; i ++){
//			if(s[i] <= s[i + 1]){
//				return false;
//			}
//		}
//	}
    int m = n;
    int k = m % 10;
    m /= 10;
    int x = m % 10;
    m /= 10;
    if(x == k){
    	return false;
	}
	if(x > k){
		while(m >= 1){
			if(m % 10 <= x){
				return false;
			}
			x = m % 10;
			m /= 10;
		}
	}
	if(k > x){
		while(m >= 1){
			if(m % 10 >= x){
				return false;
			}
			x = m % 10;
			m /= 10;
		}
	}
	return true;
}

bool kt2(int n){
	for(int i = 2; i <= sqrt(n); i ++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	
	int t; cin >> t;
	while(t --){
		int n; cin >> n;
		int dem = 0;
		for(int i = pow1(n - 1); i < pow1(n); i ++){
			if(kt(i)){
				if(kt2(i)){
					++ dem;
				}
			}
		}
		cout << dem << endl; 
	}
	
	return 0;
	
}
