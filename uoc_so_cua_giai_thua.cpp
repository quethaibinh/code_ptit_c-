#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t --){
        int n, p;
        cin >> n >> p;
        if(n < p){
            cout << "0\n";
        }else{
            int dem = 0;
            for(int i = 1; i <= n; i ++){
                if(i % p == 0){
                    int tmp = i;
                    while(tmp % p == 0){
                        tmp /= p;
                        dem ++;
                    }
                }
                
            }
            cout << dem << "\n";
        }
    }


    return 0;

}