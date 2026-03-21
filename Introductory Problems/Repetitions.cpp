#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  string s; cin >> s;
  int n = (int)s.size(), cnt(1), ans(1);

  for(int i = 1; i < n; ++i)
  {
    if(s[i] == s[i - 1]) ++cnt;
    else cnt = 1;
    
    ans = max(ans, cnt);
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
