#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  long long n; cin >> n;

  for(int i = 1; i <= n; ++i)
  {
    long long tot = i * i;
    long long ans = (tot * (tot - 1)) / 2;
    long long val = (i - 4) * (i - 4) * 8;

    val += ((i - 4) * 24) + ((i - 3) * 16) + 32;
    val /= 2;
 
    ans -= val;
    cout << ans << "\n";
  }
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
