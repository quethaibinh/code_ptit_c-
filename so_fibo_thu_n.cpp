#include<bits/stdc++.h>

using namespace std;

long long fibo[100];

void fib(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 92; i ++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

int main(){

    fib();
    int t;
    cin >> t;
    while(t --){
        long long n;
        cin >> n;
        bool kt = false;
        for(int i = 0; i < 92; i ++){
            if(n == fibo[i]){
                kt = true;
                break;
            }
        }
        if(kt){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }


    return 0;

}