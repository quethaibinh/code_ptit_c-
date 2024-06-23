#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    ll a[n][n];
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            int min_pos = j;
            for(int k = j + 1; k < n; k ++){
                if(a[k][i] < a[min_pos][i]){
                    min_pos = k;
                }
            }
            swap(a[j][i], a[min_pos][i]);
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
