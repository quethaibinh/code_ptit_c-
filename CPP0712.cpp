#include<bits/stdc++.h>

using namespace std;
#define ll long long

void khoitao(int a[100], int k){
    for(int i = 1; i <= k ; i ++){
        a[i] = i;
    }
}

void sinh(int a[100], int n, int k, int &ok){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        -- i;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        a[i] ++;
        for(int j = i + 1; j <= k; j ++){
            a[j] = a[j - 1] + 1;
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
    while(t --){
        int n, k, ok = 1;
        cin >> n >> k;
        int a[k + 1];
        khoitao(a, k);
        while(ok){
            for(int i = 1; i <= k; i ++){
                cout << a[i];
            }
            cout << ' ';
            sinh(a, n, k, ok);
        }
        cout << '\n';
    }

    return 0;
}
