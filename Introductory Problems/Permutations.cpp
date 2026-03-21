#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  int n; cin >> n;

  if(n > 1 && n <= 3)
  {
    cout << "NO SOLUTION";
    return;
  }

  for(int i = 2; i <= n; i += 2) cout << i << " ";
  for(int i = 1; i <= n; i += 2) cout << i << " ";
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
