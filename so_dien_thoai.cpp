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
        string s;
        getline(cin, s);
        char so[15];
        int k = 0;
        for(int i = s.size() - 1; i >= 0; i --){
            if(s[i] >= '0' && s[i] <= '9'){
                so[k] = s[i];
                ++ k;
            }
            if(k == 9){
                break;
            }
        }
        so[k] = '0';
        for(int i = k; i >= 0; i --){
            cout << so[i];
        }
        cout << '\n';
    }


    return 0;
}    