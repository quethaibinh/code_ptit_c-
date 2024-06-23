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
        int n;
        cin >> n;
        int a[n + 1], b[n + 1];
        for(int i = 1; i <= n; i ++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        // for(int i = 1; i <= n; i ++){
        //     cout << a[i] << ' ';
        // }
        int cnt = 1;
        for(int i = 1; i <= n; i += 2){
            b[i] = a[cnt ++];
        }
        for(int i = 2; i <= n; i += 2){
            b[i] = a[cnt ++];
        }
        for(int i = 1; i <= n; i ++){
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
	
	return 0;
}
