#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

const int mod = 1e9 + 7;

void solve()
{
  int n; cin >> n;
  long long ans(1);

  for(int i = 0; i < n; ++i) 
  {
    ans = (ans * 2) % mod;
  }
  cout << ans << "\n";
}

/*************************** ENDS HERE ***************************/

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
  return 0;
}
