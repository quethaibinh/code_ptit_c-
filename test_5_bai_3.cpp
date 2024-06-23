#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll a[505][505], maxc = 0;
int n, m;
void duong(int i, int j, ll &max){
    // cout << "1\n";
    maxc += a[i][j];
    if(i == n && j == m){
        if(maxc > max){
            max = maxc;
        }
    }
    if(j == m){
        duong(i + 1, j, max);
    }
    if(i == n){
        duong(i, j + 1, max);
    }
    if(i != n && j != m){
        duong(i + 1, j, max);
        duong(i, j + 1, max);
        duong(i + 1, j + 1, max);
    }
    maxc -= a[i][j];
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    ll max = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j ++){
            cin >> a[i][j];
        }
    }
    duong(1, 1, max);
    cout << max << '\n';

    return 0;
}
