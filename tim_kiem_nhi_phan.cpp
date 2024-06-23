#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t --){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(auto &x : a){
			cin >> x;
		}
		int l = 0, r = n - 1;
		bool kt = false;
		int mid;
		while(l <= r){
			mid = (l + r) / 2;
			if(k == a[mid]){
				kt = true;
				break;
			}
			if(k < a[mid]){
				r = mid - 1;
			}
			if(k > a[mid]){
				l = mid + 1;
			}
		}
		if(kt){
			cout << mid + 1 << "\n";
		}else{
			cout << "NO\n";
		}
	}
	
	return 0;
	
}
