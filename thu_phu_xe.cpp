#include<bits/stdc++.h>

using namespace std;

map<pair<string, int>, int> mp;
map<string, int> m;

void in(){
    mp[{"Xe_con", 5}] = 10000;
    mp[{"Xe_con", 7}] = 15000;
    mp[{"Xe_tai", 2}] = 20000;
    mp[{"Xe_khach", 29}] = 50000;
    mp[{"Xe_khach", 45}] = 70000;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    
    in();
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        string bien, loai;
        int gh;
        string trt, ngay;
        cin >> bien >> loai >> gh >> trt >> ngay;
        if(trt == "IN"){
            m[ngay] += (mp[{loai, gh}]);
        }
    }
    for(auto x : m){
        cout << x.first << ": " << x.second << '\n';
    }

    return 0;

}