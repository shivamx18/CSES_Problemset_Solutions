#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
void solve()
{
  long long n; cin >> n;
 
  if(n <= 9) cout << n;
  else 
  {
    long long dig(1), tenPow(1);
    while(true)
    {
      long long range = (9LL * dig * tenPow);
 
      if(n <= range)
      {
        long long num = tenPow + (n + dig - 1) / dig - 1;
 
        string ans = to_string(num);
        cout << ans[(n % dig) ? n % dig - 1 : dig - 1];
        break;
      }
 
      ++dig;
      n -= range;
      tenPow *= 10LL;
    }
  }
  cout << "\n";
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
