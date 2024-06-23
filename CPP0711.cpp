#include<bits/stdc++.h>

using namespace std;
#define ll long long

void khoitao(int n, int a[]){
    for(int i = 1; i <= n; i ++){
        a[i] = 0;
    }
}

void sinh(int n, int a[], int &ok){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        -- i;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        a[i] = 1;
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
        int n, ok = 1;;
        cin >> n;
        int a[100];
        khoitao(n, a);
        while(ok){
            for(int i = 1; i <= n; i ++){
                cout << a[i];
            }
            cout << ' ';
            sinh(n, a, ok);
        }
        cout << '\n';
    }

    return 0;
}
