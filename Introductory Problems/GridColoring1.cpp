#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
void solve()
{
  int n, m; cin >> n >> m;
  vector<string> v(n);
  for(int i = 0; i < n; ++i) cin >> v[i];
 
  for(int i = 0; i < n; ++i)
  {
    for(int j = 0; j < m; ++j)
    {
      if(((i + j)&1)^1)
      {
        if(v[i][j] == 'B') v[i][j] = 'A';
        else v[i][j] = 'B';
      }
      else 
      {
        if(v[i][j] == 'D') v[i][j] = 'C';
        else v[i][j] = 'D';
      }
    }
  }
  
  for(auto &it : v) cout << it << "\n";
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
