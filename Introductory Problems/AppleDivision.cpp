#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
void solve()
{
  int n; cin >> n;
  vector<long long> v(n);
  for(int i = 0; i < n; ++i) cin >> v[i];
 
  long long ans = LLONG_MAX;
  for(int i = 0; i < (1LL << n); ++i)
  {
    long long sum1(0), sum2(0);
    for(int j = 0; j < n; ++j)
    {
      if((1LL << j) & i) sum1 += v[j];
      else sum2 += v[j];
    }
 
    ans = min(ans, abs(sum1 - sum2));
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
