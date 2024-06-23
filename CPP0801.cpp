#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	ifstream ifs;
    ifs.open("DATA.in");
    int n, m;
    ifs >> n >> m;
    int a[n], b[m];
    set<int> se1, se2;
    vector<int> giao;
    for(int i = 0; i < n; i ++){
        ifs >> a[i];
        se1.insert(a[i]);
    }
    for(int i = 0; i < m; i ++){
        ifs >> b[i];
        se2.insert(b[i]);
    }
    for(auto x : se1){
        for(auto y : se2){
            if(x == y){
                giao.push_back(x);
                break;
            }
        }
    }
    for(auto x : giao){
        cout << x << ' ';
    }
    ifs.close();

    return 0;   
}
