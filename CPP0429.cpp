#include<bits/stdc++.h>

using namespace std;


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n, k, b, min1 = 100000;
    cin >> n >> k >> b;
    int light[n + 1]; 
    int h[b + 1];
    // memset(light, 1, sizeof(light));
    for(int i = 1; i <= n; i ++){
        light[i] = 1;
    }
    for(int i = 1; i <= b; i ++){
        cin >> h[i];
        light[h[i]] = 0;
    }
    for(int i = 1; i <= n - k + 1; i ++){
        int min2 = 0;
        for(int j = i; j < i + k; j ++){
            min2 += light[j];
        }
        if(k - min2 < min1){
            min1 = k - min2;
        }
    }
    cout << min1 << '\n';
	
	return 0;
}
