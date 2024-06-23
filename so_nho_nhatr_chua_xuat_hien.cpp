#include<bits/stdc++.h>

using namespace std;

int  main(){
    
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        sort(a, a + n);
        int res = 1;
        for(int i = 0; i < n; i ++){
            if(a[i] > 0){
                if(a[i] <= res){
                    res = a[i] + 1;
                }else{
                    break;
                }
            }
        }
        cout << res << '\n'
;    }

    return 0;

}