#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
void solve()
{
  vector<string> mat(8);
  for(int i = 0; i < 8; ++i) cin >> mat[i];
  
  long long ans(0);
  set<long long> st;
 
  auto isPos = [&]() -> bool
  {
    for(int i = 0; i < 8; ++i)
    {
      long long q(0);
      for(int j = 0; j < 8; ++j) q += (mat[i][j] == 'q');
      if(q > 1) return 0;
      q = 0;
      for(int j = 0; j < 8; ++j) q += (mat[j][i] == 'q');
      if(q > 1) return 0;
    }
 
    for(int i = 0; i < 8; ++i)
    {
      for(int j = 0; j < 8; ++j)
      {
        long long idx1 = i, idx2 = j, q(0);
        while(idx1 >= 0 && idx2 < 8) q += (mat[idx1--][idx2++] == 'q');
        if(q > 1) return 0;
        idx1 = i, idx2 = j;
        q = 0;
        while(idx1 < 8 && idx2 < 8) q += (mat[idx1++][idx2++] == 'q');
        if(q > 1) return 0;
      }
    }
 
    return 1;
  };
  
  auto solve = [&](long long idx, auto& self) -> void
  {
    if(idx >= 8)
    {
      if(isPos()) ++ans;
      return;
    }
 
    for(int j = 0; j < 8; ++j)
    {
      if(mat[idx][j] != '.' || st.count(j)) continue;
      mat[idx][j] = 'q';
      st.insert(j);
      self(idx + 1, self);
      st.erase(j);
      mat[idx][j] = '.';
    }
  };
  solve(0, solve);
 
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
