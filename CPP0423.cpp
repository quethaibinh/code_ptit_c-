#include<bits/stdc++.h>

using namespace std;


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int t;
    cin >> t;
    while(t --){
        int n, k;
        cin >> n >> k;
        int a[n];
        int max1 = 0;
        for(auto &x : a){
            cin >> x;
            if(x <= k){
                max1 ++;
            }
        }
        int cnt = 0;
        for(int i = 0; i <= n - max1; i ++){
            int res = 0;
            for(int j = i; j < i + max1; j ++){
                if(a[j] <= k){
                    res ++;
                }
            }
            cnt = max(cnt, res);
        }
        cout << max1 - cnt << '\n';
    }
	
	return 0;
}
