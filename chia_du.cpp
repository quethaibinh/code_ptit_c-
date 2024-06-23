#include<bits/stdc++.h>

using namespace std;

int main(){
   
    int t;
    cin >> t;
    while(t --){
        int a, n;
        cin >> a >> n;
        bool kt = false;
        for(int i = 0; i <= n; i ++){
            if((a * i) % n == 1){
                cout << i << "\n";
                kt = true;
                break;
            }
        }
        if(!kt){
            cout << "-1\n";
        }
    }

    return 0;
}