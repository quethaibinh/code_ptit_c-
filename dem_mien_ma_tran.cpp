#include<bits/stdc++.h>

using namespace std;


int main(){
 
    // freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	int t;
	cin >> t;
	while(t --){
		int n, m;
		cin >> n >> m;
		int a[105][105];
		memset(a, 0, sizeof(a));
		// de cho cac canh ria ngoai cua ma tran = 0
		queue<pair<int, int>> qe;
		for(int i = 1; i <= n; i ++){
			for(int j = 1; j <= m; j ++){
                cin >> a[i][j];
			}
		}
		int cnt = 0;
		for(int i = 1; i <= n; i ++){
			for(int j = 1; j <= m; j ++){
                if(a[i][j] == 1){
					++ cnt;
					a[i][j] = 0;
					pair<int, int> pa1(i, j);
					qe.push(pa1);
					while(!qe.empty()){
						int i1 = (qe.front()).first;
						int j1 = (qe.front()).second;
						qe.pop();
						// check xem 8 o xung quanh co o nao bang 1 ko
						// neu co cho vao queue roi cho gia tri o do = 0
                        if(a[i1][j1 + 1] == 1){
                            pair<int, int> pa(i1, j1 + 1);
							qe.push(pa);
							a[i1][j1 + 1] = 0;
						}
						if(a[i1][j1- 1] == 1){
                            pair<int, int> pa(i1, j1 - 1);
							qe.push(pa);
							a[i1][j1 - 1] = 0;
						}
						if(a[i1 + 1][j1] == 1){
                            pair<int, int> pa(i1 + 1, j1);
							qe.push(pa);
							a[i1 + 1][j1] = 0;
						}
						if(a[i1 - 1][j1] == 1){
                            pair<int, int> pa(i1 - 1, j1);
							qe.push(pa);
							a[i1 - 1][j1] = 0;
						}
						if(a[i1 + 1][j1 + 1] == 1){
                            pair<int, int> pa(i1 + 1, j1 + 1);
							qe.push(pa);
							a[i1 + 1][j1 + 1] = 0;
						}
						if(a[i1 + 1][j1 - 1] == 1){
                            pair<int, int> pa(i1 + 1, j1 - 1);
							qe.push(pa);
							a[i1 + 1][j1 - 1] = 0;
						}
						if(a[i1 - 1][j1 + 1] == 1){
                            pair<int, int> pa(i1 - 1, j1 + 1);
							qe.push(pa);
							a[i1 - 1][j1 + 1] = 0;
						}
						if(a[i1 - 1][j1 - 1] == 1){
                            pair<int, int> pa(i1 - 1, j1 - 1);
							qe.push(pa);
							a[i1 - 1][j1 - 1] = 0;
						}
					}
				}
			}
		}
		cout << cnt;
		cout << '\n';
	}
 
	return 0;
 
}