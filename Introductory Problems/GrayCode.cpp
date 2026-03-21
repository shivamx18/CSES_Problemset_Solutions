#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  int n; cin >> n;
  long long maxVal = (1LL << n);
 
  for(int i = 0; i < maxVal; ++i)
  {
    long long g = i ^ (i >> 1);
    string ans;
    for(int j = n - 1; j >= 0; --j) ans += ((g >> j) & 1) ? '1' : '0';
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
