#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int t;
    cin >> t;
    while(t --){
        int  n;
        cin >> n;
        int a[n];
        int sum1[n], sum2[n];
        int sum11 = 0, sum22 = 0;
        for(int i = 0; i < n; i ++){
            cin >> a[i];
            sum11 += a[i];
            sum1[i] = sum11;
        }
        for(int i = n - 1; i >= 0; i --){
            sum22 += a[i];
            sum2[i] = sum22;
        }
        bool kt = false;
        for(int i = 1; i < n - 1; i ++){
            if(sum1[i - 1] == sum2[i + 1]){
                cout << i + 1 << '\n';
                kt = true;
            }
        }
        if(!kt){
            cout << "-1\n";
        }
    }

    return 0;   
}
