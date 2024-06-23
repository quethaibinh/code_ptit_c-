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
        int a[n];
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        int max1 = 0;
        for(int i = 0; i < n; i ++){
            for(int j = n - 1; j >= i; j --){
                if(max1 > j - i){
                    break;
                }
                if(a[j] > a[i]){
                    max1 = max(max1, j - i);
                }
            }
        }
        cout << max1 << '\n';
    }

    return 0;
}
