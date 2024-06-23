#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll N = 10007;

void khoitao(int a[], int n){
    for(int i = 1; i <= n; i ++){
        a[i] = 0;
    }
}

void sinh(int a[], int n, int &ok){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i --;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        a[i] = 1;
    }
}

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int t, k = 1;
    cin >> t;
    while(t --){
        int n, ok = 1;
        ll sum = 0;
        cin >> n;
        ll a[105];
        int check[105];
        for(int i = 1; i <= n; i ++){
            cin >> a[i];
        }
        khoitao(check, n);
        sinh(check, n, ok);
        while(ok){
            ll bc = 1;
            for(int i = 1; i <= n; i ++){
                if(check[i]){
                    bc = lcm(bc, a[i]);
                }
            }
            sum += (bc % N);
            sinh(check, n, ok);
        }
        cout << "Case " << k << ": ";
        cout << sum << '\n';
        ++ k;
    }

    return 0;
}
