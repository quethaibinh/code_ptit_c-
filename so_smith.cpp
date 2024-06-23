#include<bits/stdc++.h>

using namespace std;

// int nt[1000006];
// void snt(){
// 	nt[0] = nt[1] = 0;
// 	for(long long i = 2; i <= 1000000; i ++){
// 		nt[i] = 1;
// 	}
// 	for(long long i = 2; i <= 1000; i ++){
// 		if(nt[i]){
// 			for(long long j = i * i; j <= 1000000; j += i){
// 				nt[j] = 0;
// 			}
// 		}
// 	}
// }

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	// snt();
	// int t; cin >> t;
	// while(t --){
		long long n; cin >> n;
		// if(nt[n]){
		// 	cout << "NO\n";
		// 	// continue;
		// }
		long long  m = n;
		long long cnt = 0;
		for(long long i = 2; i <= sqrt(m); i ++){
			if(m % i == 0){
				while(m % i == 0){
					long long j = i;
					while(j >= 1){
					    cnt += j % 10;
					    j /= 10;
					}
					m /= i;
				}
			}
		}
		if(m != 1){
			long long j = m;
			while(j >= 1){
				cnt += j % 10;
				j /= 10;
			}
		}
		while(n >= 1){
			cnt -= n % 10;
			n /= 10;
		}
		if(cnt == 0){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	// }
	
	return 0;
	
}
