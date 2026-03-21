#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  long long n, m; cin >> n >> m; 

  if(m <= n)
  {
    if(n&1)
    {
      long long ans = ((n - 1) * (n - 1)) + m;
      cout << ans << "\n";
    }
    else
    {
      long long ans = (n * n) - (m - 1);
      cout << ans << "\n";
    }

    return;
  }
  
  if(m&1)
  {
    long long ans = ((m - 1) * (m - 1)) + (2 * m) - n;
    cout << ans << '\n';
  }
  else
  {
    long long ans = (m * m);
    ans -= 2 * m - n - 1;
    cout << ans << "\n";
  }
}


/*************************** ENDS HERE ***************************/

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int T; cin >> T;
  while(T--) solve();
  return 0;
}
