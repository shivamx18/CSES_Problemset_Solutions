#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
const int maxN = 1001;
int dp[maxN][maxN];
int dx[] = {-1, -2, 1, 2, -2, 1, -1, 2};
int dy[] = {-2, -1, 2, 1, 1, -2, 2, -1};
 
void solve()
{
  int n; cin >> n;
  dp[0][0] = 0;
  memset(dp, 0, sizeof(dp));
  queue<pair<int, int>> q;
  q.push({0, 0});
 
  while(!q.empty())
  {
    auto temp = q.front();
    int x = temp.first, y = temp.second;
    q.pop();
 
    for(int i = 0; i < 8; ++i)
    {
      int newI = dx[i] + x, newY = dy[i] + y;
      if(!newI && !newY) continue;
      if(newI >= n || newY >= n || newI < 0 || newY < 0 || dp[newI][newY] > 0) continue;
 
      dp[newI][newY] = dp[x][y] + 1;
      q.push({newI, newY});
    }
  }
 
  for(int i = 0; i < n; ++i)
  {
    for(int j = 0; j < n; ++j) cout << dp[i][j] << " ";
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
