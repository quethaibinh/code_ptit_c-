#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		char s1[16] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'}, s2[16] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
		int n; cin >> n;
		char a[16];
		a[15] = '\0';
		int dem = 0;
		if(n == 101){
			for(int i = 0; i < 15; i ++){
				cin >> a[i];
				if(s1[i] == a[i]){
					dem += 1;
				}
			}
		}else{
			for(int i = 0; i < 15; i ++){
				cin >> a[i];
				if(s2[i] == a[i]){
					dem += 1;
				}
			}
		} 
		float diem = (float)dem * 10 / 15;
		printf("%.2f\n", diem);
    }
    return 0;
}
