#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

#define MAX 1000000000 + 5
#define M 100 + 5
#define N 200000 + 5
#define MOD (long long)1000000007
#define ll long long
#define ld long double
#define sz size()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)

ll sum(ll a, ll b) {
	int n = b - a + 1;
	return n * (b + a) / 2;
}

int main() {
	int n;
	cin >> n;

	ll tong = 0;
	ll k = n / 2;
	ll left = pow(10, k - 1);
	ll right = pow(10, k) - 1;
	ll tmp = pow(10, k - 1) - 1;

	if (n % 2 == 0) {
		tong = sum(left, right) * pow((ll)10, k) + sum(1, right) - sum(1, tmp) * 10;
	}
	else {
		tong = sum(left * 10, right * 10 + 9) * pow((ll)10, k) + (sum(1, right) - sum(1, tmp) * 10) * 10;
	}

	cout << tong << endl;

	return 0;
}