#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i ++){
            cin >> b[i];
        }
        int max = 0;
        for(int i = 0; i < n; i ++){
            int sum1 = 0, sum2 = 0;
            for(int j = i; j < n; j ++){
                sum1 += a[j];
                sum2 += b[j];
                if(sum1 == sum2 && j - i + 1 > max){
                    max = j - i + 1;
                }
            }
        }
        cout << max << '\n';
    }

    return 0;

}