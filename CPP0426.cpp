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
        int a[n], b[n + 1];
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        sort(a, a + n);
        int l = 0, r = n - 1;
        for(int i = 1; i <= n; i ++){
            if(i % 2 == 1){
                b[i] = a[r --];
            }
            else{
                b[i] = a[l ++];
            }
        }
        for(int i = 1; i <= n; i ++){
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
	
	return 0;
}
