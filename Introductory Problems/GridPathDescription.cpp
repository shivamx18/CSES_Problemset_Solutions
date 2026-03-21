#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
bool vis[7][7];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
 
void solve()
{
  string s;cin >> s;
  memset(vis, false, sizeof(vis));
 
  int ans(0);
  auto isAlreadyVisited = [&](int x, int y) -> bool
  {
    if(x < 0 || y < 0 || x >= 7 || y >= 7) return 1;
    return vis[x][y];
  };
 
  // Simple Backtracking with Pruning to eliminate many cases   
  auto dfs = [&](int i, int j, int idx, auto &dfs) -> void
  {
    if (i == 6 && j == 0 && idx == 48)
    {
      ++ans;
      return;
    }
    if (i == 6 && j == 0) return;
    if(idx >= 48) return;
 
    vis[i][j] = true;
    if(s[idx] == 'L') {if(!isAlreadyVisited(i, j - 1)) dfs(i, j - 1, idx + 1, dfs);}
    else if(s[idx] == 'R') {if(!isAlreadyVisited(i, j + 1)) dfs(i, j + 1, idx + 1, dfs);}
    else if(s[idx] == 'U') {if(!isAlreadyVisited(i - 1, j)) dfs(i - 1, j, idx + 1, dfs);}
    else if(s[idx] == 'D') {if(!isAlreadyVisited(i + 1, j)) dfs(i + 1, j, idx + 1, dfs);}
    else if (s[idx] == '?')
    {
      // Pruning to eliminate cases where 
      // 1 - we can't go to either of the top/down
      // Example Below: 
      //         ....   Blocked      ....
      //         Open   CurrentPos   Open
      //         ....   Blocked      ....
      // 2 - we can't go to either of the right/left
      // Example Below: 
      //         .......    Open         ....
      //         Blocked   CurrentPos    Blocked
      //         .......    Open         ....
      if(!isAlreadyVisited(i + 1, j) && !isAlreadyVisited(i - 1, j) && isAlreadyVisited(i, j + 1) && isAlreadyVisited(i, j - 1)) {vis[i][j] = false; return;}
      if(isAlreadyVisited(i + 1, j) && isAlreadyVisited(i - 1, j) && !isAlreadyVisited(i, j + 1) && !isAlreadyVisited(i, j - 1)) {vis[i][j] = false; return;}
 
      for(int k = 0; k < 4; ++k)
      {
        int x = i + dx[k], y = j + dy[k];
        if(!isAlreadyVisited(x, y)) dfs(x, y, idx + 1, dfs);
      }
    }
 
    vis[i][j] = false;
  };
 
  dfs(0, 0, 0, dfs);
  cout << ans;
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
