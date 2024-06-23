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
        int n, tmp = 0;
        cin >> n;
        int a[n], b[n];
        bool kt[n];
        memset(kt, true, sizeof(kt));
        memset(b, 0, sizeof(b));
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; i ++){
            if(a[i] == a[i + 1]){
                a[i] += a[i + 1];
                a[i + 1] = 0;
            }
        }
        for(int i = 0; i < n; i ++){
            if(a[i] != 0){
                b[tmp ++] = a[i];
            }
        }

        for(auto x : b){
            cout << x << ' ';
        }
        cout << '\n';
    }
	
	return 0;
}
