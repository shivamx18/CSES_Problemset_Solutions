#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
void solve()
{
  int n; cin >> n;
  vector<vector<int>> ans(n, vector<int>(n, -1));
  ans[0][0] = 0;
  for(int i = 0; i < n; ++i)
  {
    ans[i][0] = i;
    ans[0][i] = i;
  }
 
  for(int i = 1; i < n; ++i)
  {
    for(int j = 1; j < n; ++j)
    {
      unordered_set<int> st;
      for(int k = 0; k < j; ++k) st.insert(ans[i][k]);
      for(int k = 0; k < i; ++k) st.insert(ans[k][j]);
 
 
      int mex(0);
      while(st.find(mex) != st.end()) ++mex;
      ans[i][j] = mex;
    }
  }
  
  for(auto &it : ans)
  {
    for(auto &e : it) cout << e << " ";
    cout << "\n";
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
