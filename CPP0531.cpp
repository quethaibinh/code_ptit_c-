#include<bits/stdc++.h>

using namespace std;

struct toado{
    double x, y, z;
};

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    while(n --){
        toado a[4];
        for(int j = 0; j < 4; j ++){
            cin >> a[j].x >> a[j].y >> a[j].z; 
        }
        toado ab, ac, pt;
        ab.x = a[0].x - a[1].x;
        ab.y = a[0].y - a[1].y;
        ab.z = a[0].z - a[1].z;
        ac.x = a[0].x - a[2].x;
        ac.y = a[0].y - a[2].y;
        ac.z = a[0].z - a[2].z;
        pt.x = (ab.y * ac.z - ac.y * ab.z);
        pt.y = (ab.z * ac.x - ac.z * ab.x);
        pt.z = (ab.x * ac.y - ac.y * ab.x);
        double tu = pt.x * (a[3].x - a[0].x) + pt.y * (a[3].y - a[0].y) + pt.z * (a[3].z - a[0].z);
        // cout << fixed << setprecision(2) << tu << '\n';
        if(tu == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    // toado a[n][4];
    // for(int i = 0; i < n; i ++){
    //     for(int j = 0; j < 4; j ++){
    //         cin >> a[i][j].x >> a[i][j].y >> a[i][j].z; 
    //     }
    // }
    // for(int i = 0; i < n; i ++){
    //     toado ab, ac, pt;
    //     ab.x = a[i][0].x - a[i][1].x;
    //     ab.y = a[i][0].y - a[i][1].y;
    //     ab.z = a[i][0].z - a[i][1].z;
    //     ac.x = a[i][0].x - a[i][2].x;
    //     ac.y = a[i][0].y - a[i][2].y;
    //     ac.z = a[i][0].z - a[i][2].z;
    //     pt.x = (ab.y * ac.z - ac.y * ab.z);
    //     pt.y = (ab.z * ac.x - ac.z * ab.x);
    //     pt.z = (ab.x * ac.y - ac.y * ab.x);
    //     double tu = pt.x * (a[i][3].x - a[i][0].x) + pt.y * (a[i][3].y - a[i][0].y) + pt.z * (a[i][3].z - a[i][0].z);
    //     // cout << fixed << setprecision(2) << tu << '\n';
    //     if(tu == 0){
    //         cout << "YES\n";
    //     }
    //     else{
    //         cout << "NO\n";
    //     }
    // }
	
	return 0;
}
