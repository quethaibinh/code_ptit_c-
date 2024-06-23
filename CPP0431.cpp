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
        long long cnt1 = 0;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i ++){
            int x = lower_bound(a.begin() + i + 1, a.end(), a[i] + k) - a.begin();
            if(x == n) -- x;
            while(a[x] >= a[i] + k){
                -- x;
            }
            if(x > i){
                cnt1 += x - i;
            }
        }
        cout << cnt1 << '\n';
        // cout << (n * (n - 1) / 2) - cnt << '\n';
    }
	
	return 0;
}
