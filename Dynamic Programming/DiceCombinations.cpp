#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
const int mod = 1e9 + 7;

void solve()
{
  int n; cin >> n;
  vector<long long> dp(n + 1, 0);
  dp[0] = 1;

  for(int i = 1; i <= n; ++i)
  {
    for(int j = 1; j <= 6; ++j)
    {
      if(i - j < 0) break;
      dp[i] = (dp[i] + dp[i - j]) % mod;
    }
  }
  cout << dp[n];
}
 
/*************************** ENDS HERE ***************************/
 
int32_t main()
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  
  solve();
  return 0;
}
