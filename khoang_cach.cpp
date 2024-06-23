#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		double a, b, c, d; cin >> a >> b >> c >> d;
		double x1 = (a - c) * (a - c),
		x2 = (b - d) * (b - d);
		double kq = sqrt(x1 + x2);
		printf("%.4f\n", kq);
	}
		
	return 0;
	
}
