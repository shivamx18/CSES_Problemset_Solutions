#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
void solve()
{
  int n, x, y; cin >> n >> x >> y;
 
  auto printRange = [&](int low, int high, bool k) -> void
  {
    for(int i = low; i <= high; ++i) cout << i << " ";
    if(k) cout << "\n";
  };
 
  if (!x && !y)
  {
    cout << "YES\n";
    printRange(1, n, 1);
    printRange(1, n, 1);
    return;
  }
  if (!x || !y || x + y > n)
  {
    cout << "NO\n";
    return;
  }
 
  cout << "YES\n";
  printRange(1, n, 1);
  
  int num = (n - x - y);
  printRange(1, num, 0);
  printRange(num + x + 1, n, 0);
  printRange(num + 1, num + x, 1);
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
