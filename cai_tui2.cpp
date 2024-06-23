#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1111;
const int INF = 1e9+7;
#define int long long

struct product{
    int w;
    int v;
} a[N];
int n, f, fopt = -INF, W, Mmin[N];

bool cmp(product a, product b){
    return 1.0*a.v/a.w > 1.0*b.v/b.w;
}

void init(){
    cin >> n >> W;
    f = 0; fopt = -INF;
    for(int i = 0; i < n; ++i)
        cin >> a[i].w;
    for(int i = 0; i < n; ++i)
        cin >> a[i].v;
    Mmin[n] = INF;
    for(int i = n-1; i >= 0; --i)
        Mmin[i] = min(Mmin[i+1], a[i].w);
    sort(a, a+n, cmp);
}

void Try(int i){
    //cout << f << " ";
    if(i == n || W < Mmin[i])
    {
        fopt = max(fopt, f);
        return;
    }
    int gk = f + W * a[n-1].v/ a[n-1].w;
    if(gk < fopt) return;
    for(int j = 0; j <= 1; ++j){
        f += j * a[i].v;
        W -= j * a[i].w;
        Try(i + 1);
        f -= j * a[i].v;
        W += j * a[i].w;
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
    int t; cin >> t;
    while(t--){
        init();
        Try(1);
        cout << fopt << "\n";
    }
}