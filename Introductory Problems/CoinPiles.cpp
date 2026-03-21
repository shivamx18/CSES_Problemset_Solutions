#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  long long n, m; cin >> n >> m;
  if((n + m) % 3) cout << "NO\n";
  else
  {
    long long maxVal = (max(n, m) + 1)/2;
    long long minVal = min(n, m);

    if(maxVal <= minVal) cout << "YES\n";
    else cout << "NO\n";
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
