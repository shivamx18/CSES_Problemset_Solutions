#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  long long n; cin >> n;
  long long expectedSum = (n * (n + 1)) / 2;
  long long sum(0);

  for(int i = 0; i < n - 1; ++i)
  {
    int num; cin >> num;
    sum += num;
  }
  
  // Most optimized solution, which uses TC of O(1)
  cout << expectedSum - sum << "\n";
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
