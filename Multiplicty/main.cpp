#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int Nmax = 100005;
const int INF = 1e9 + 7;
vector<int> vec[Nmax];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        for(int j = 1; j * j <= t && j <= n; j++) {
            if(t % j == 0) {
                vec[i].push_back(j);
                if(t / j <= n && t / j != j)
                    vec[i].push_back(t / j);
            }
        }
        sort(vec[i].begin(), vec[i].end());
    }
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int num = vec[i].size();
        for(int j = num - 1; j > -1; j--) {
            int now = vec[i][j];
            dp[now] = (dp[now] + dp[now - 1]) % INF;
            ans += dp[now - 1];
            ans %= INF;
        }
    }
    cout << ans << endl;
    return 0;
}
