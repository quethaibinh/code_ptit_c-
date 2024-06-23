#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        int a[n];
        set<int> se;
        for(int i = 0; i < n; i ++){
            cin >> a[i];
            se.insert(a[i]);
        }
        int dem = 0;
        for(auto x : se){
            dem ++;
            if(dem == d){
                cout << x;
                break;
            }
        }
        cout << '\n';
    }

    return 0;
}