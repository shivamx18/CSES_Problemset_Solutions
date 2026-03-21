#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  int n; cin >> n;
  long long sum1(0), sum2(0);
  set<int> ans1, ans2;

  for(int i = n; i >= 1; --i)
  {
    if(sum1 <= sum2)
    {
      ans1.insert(i);
      sum1 += i;
    }
    else 
    {
      sum2 += i;
      ans2.insert(i);
    }
  }

  auto printSet = [&](set<int>& st) -> void
  {
    cout << st.size() << "\n";
    for(auto &it : st) cout << it << " ";
    cout << "\n";
  };

  if(sum1 == sum2)
  {
    cout << "YES\n";

    printSet(ans1);
    printSet(ans2);
  }
  else cout << "NO";
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
