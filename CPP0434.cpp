#include<bits/stdc++.h>

using namespace std;
#define ll long long


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
        int a[n], b[n];
        int k = 0;
        for(int i = 0; i < n; i ++){
            cin >> a[i];
            if(i == 1){
                b[k ++] = a[i] * a[i - 1]; 
            }
            if(i > 1){
                b[k ++] = a[i] * a[i - 2];
            }
            if(i == n - 1){
                b[k ++] = a[i] * a[i - 1];
            }
        }
        for(int i = 0; i < k; i ++){
            cout << b[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
