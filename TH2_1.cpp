#include<bits/stdc++.h>

using namespace std;


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n, m;
    cin >> n >> m;
    int a[n], b[m], ab[101], aa[101], bb[101];
    int i1 = 0, i2 = 0, i3 = 0;
    map<int, int> mpa;
    map<int, int> mpb;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
        mpa[a[i]] ++;
    }
    for(int i = 0; i < m; i ++){
        cin >> b[i];
        mpb[b[i]] ++;
    }
    for(auto x : mpa){
        if(mpb[x.first] != 0){
            ab[i1 ++] = x.first;
        }
    }
    for(int i = 0; i < i1; i ++){
        cout << ab[i] << ' ';
    }
    cout << '\n';
    for(int i = 0; i < n; i ++){
        bool kt = true;
        for(int j = 0; j < i1; j ++){
            if(a[i] == ab[j]){
                kt = false;
                break;
            }
        }
        if(kt){
            // aa[i2 ++] = a[i];
            cout << a[i] << ' ';
        }
    }
    cout << '\n';
    for(int i = 0; i < m; i ++){
        bool kt = true;
        for(int j = 0; j < i1; j ++){
            if(b[i] == ab[j]){
                kt = false;
                break;
            }
        }
        if(kt){
            // bb[i3 ++] = b[i];
            cout << b[i] << ' ';
        }
    }
	
	return 0;
}
