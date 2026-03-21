#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
void solve()
{
  string s; cin >> s;
 
  set<string> ans;
  sort(s.begin(), s.end());
 
  do{
    ans.insert(s);
  } while(next_permutation(s.begin(), s.end()));
 
  cout << ans.size() << "\n";
  for(auto &it : ans) cout << it << "\n";
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
