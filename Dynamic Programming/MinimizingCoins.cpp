#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
const int mod = 1e9 + 7;

void solve()
{
  int n, k; cin >> n >> k;
  vector<int> coins(n);
  for(auto &it : coins) cin >> it;
  vector<long long> dp(k + 1, LLONG_MAX);
  dp[0] = 0;

  for(int i = 1; i <= k; ++i)
  {
    for(auto &it : coins)
    {
      if((i - it) >= 0 && dp[i - it] != LLONG_MAX) 
      {
        dp[i] = min(dp[i], dp[i - it] + 1);
      }
    }
  }
  if(dp[k] == LLONG_MAX) dp[k] = -1;

  cout << dp[k];
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
