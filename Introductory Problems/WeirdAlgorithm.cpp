#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  // Make sure that u are using long long 
  long long n; cin >> n;

  cout << n << " ";
  if(n == 1) return;
  while(n != 1)
  {
    if(n&1) n = (3*n + 1);
    else n /= 2;

    cout << n << " ";
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
