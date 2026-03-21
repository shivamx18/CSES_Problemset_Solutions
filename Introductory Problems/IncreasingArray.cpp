#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; ++i) cin >> v[i];

  long long ans(0);
  for(int i = 1; i < n; ++i)
  {
    if(v[i] < v[i - 1])
    {
      ans += (v[i - 1] - v[i]);
      v[i] = v[i - 1];
    }
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
