#include<bits/stdc++.h>

using namespace std;
#define ll long long

int nt[1000003];
void snt(){
    // memset(nt, 1, sizeof(nt));
    nt[0] = nt[1] = 0;
    for(int i = 2; i <= 1000000; i ++){
        nt[i] = 1;
    }
    for(int i = 2; i <= 1000; i ++){
        if(nt[i]){
            for(int j = i * i; j <= 1000000; j += i){
                nt[j] = 0;
            }
        }
    }
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
	int t;
    cin >> t;
    snt();
    int x = 1;
    while(t --){
        int n;
        cin >> n;
        int b[n * n];
        int tmp = 0;
        for(int i = 0; i <= 1000000; i ++){
            if(nt[i]){
                b[tmp ++] = i;
            }
            if(tmp == n * n){
                break;
            }
        }
        int a[n][n];
        int k = 0;
        int l = 0, r = n - 1, u = 0, d = n - 1;
        while(l < r && u < d){
            for(int i = l; i <= r; i ++){
                a[u][i] = b[k ++];
            }
            u ++;
            for(int i = u; i <= d; i ++){
                a[i][r] = b[k ++]; 
            }
            r --;
            for(int i = r; i >= l; i --){
                a[d][i] = b[k ++];
            }
            d --;
            for(int i = d; i >= u; i --){
                a[i][l] = b[k ++];
            }
            l ++;
        }
        if(n % 2 != 0){
            a[n / 2][n / 2] = b[k ++];
        }
        cout << "Test " << x << ":\n";
        x ++;
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < n; j ++){
                cout << a[i][j] << ' ';
            }
            cout << '\n';
        }
    }

	return 0;
}
