#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 

    int t;
    cin >> t;
    getchar();
    while(t --){
        string ten;
        int n;
        cin.ignore();
        getline(cin, ten);
        cin >> n;
        long long a[n];
        long long tien = 0;
        for(auto &x : a){
            cin >> x;
            if(x < 0){
                tien += x;
            }
        }
        if(tien <= -100000000){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    

    return 0;

}