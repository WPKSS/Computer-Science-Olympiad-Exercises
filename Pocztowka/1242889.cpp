#include <bits/stdc++.h>
#define FOR(i, b, e) for(int i = (b); i <= (e); i++)

using namespace std;
using LL = long long;
const int INF = 1001001001;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;
    vector<int> h(n+1);
    FOR(i, 1, n) cin >> h[i];
    LL res = 0;
    for(int i = 1, j = 1; i <= n; i++) {
        while(j <= n && (j < i || h[j] < m)) j++;
        if(j == n+1) break;
        res += n-(j-1);
    }
    cout << res;
}