#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  long long a;cin >> a;

  auto totalTimes = [&](long long n, long long m) -> long long 
  { 
    long long ans(0);
    for (long long i = m; i <= n; i *= m) ans += n / i;
    return ans;
  };

  long long totalTwos = totalTimes(a, 2);
  long long totalFives = totalTimes(a, 5);
  long long totalTens = min(totalTwos, totalFives);
 
  long long ans = totalTens;
  ans += min(totalTwos - totalTens, totalFives - totalTens);
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
