#include<bits/stdc++.h>

using namespace std;

int a[100], ok;

long long pow1(int n){
	long long k = 1;
	for(int i = 0; i < n; i ++){
        k *= 10;
	}
	return k;
}

void khoi_tao(int x){
    for(int i = 0; i < x; i ++){
        a[i] = 0;
    }
}

void sinh(int x){
    int i = x - 1;
    while(i >= 0 && a[i] == 45){
        a[i] = 0;
        i --;
    }
    if(i == -1){
        ok = 0;
    }else{
        a[i] = 45;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 

    int n;
    cin >> n;
    ok = 1;
    long long sum = 0;
    if(n % 2 == 0){
        int n1 = n / 2;
        khoi_tao(n1);
        while(ok){
            if(a[0] != 0){
                for(int i = n1 - 1; i >= 0; i --){
                    // long long tich = 1;
                    // for(int j = i; j >= 0; j --){
                    //     tich *= pow1(j);
                    // }
                    sum += (a[i] * pow1(i) * (pow1(i) + pow1(n - i - 1)));
                }
            }
            sinh(n1);
        }
    }else{
        int n1 = (n / 2) + 1;
        khoi_tao(n1);
        while(ok){
            if(a[0] != 0){
                for(int i = n1 - 1; i >= 0; i --){
                    // long long tich = 1;
                    // for(int j = i; j >= 0; j --){
                    //     tich *= pow1(j);
                    // }
                    sum += (a[i] * pow1(i) * (pow1(i) + pow1(n - i - 1)));
                }
                sum += (a[n1 - 1] * pow1(n1 - 1));
            }
            sinh(n1);
        }
    }
    cout << sum;
    

    return 0;

}