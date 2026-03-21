#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
void solve()
{
  int m; cin >> m;
  vector<pair<int, int>> ans;
 
  auto towerOfHanoi = [&](int n, int from, int to, auto& self) -> void
  {
    if(n == 0) return;
    int other = (from ^ to);
 
    self(n - 1, from, other, self);
    ans.push_back({from, to});
    self(n - 1, other, to, self);
  };
  towerOfHanoi(m, 1, 3, towerOfHanoi);
 
  cout << ans.size() << "\n";
  for(auto &it : ans) cout << it.first << " " << it.second << "\n";
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
