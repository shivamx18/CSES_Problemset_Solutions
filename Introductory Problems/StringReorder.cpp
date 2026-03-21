#include <bits/stdc++.h>
using namespace std;
 
/*************************** CODE HERE ***************************/
 
int freq[26];
void solve()
{
  string s; cin >> s;
 
  int n = (int)s.size();
  memset(freq, 0, sizeof(freq));
 
  for(auto &it : s) ++freq[it - 'A'];
  int tot = n;
  set<pair<int, char>> st;
  for(int i = 0; i < 26; ++i)
  {
    char ch = (char)(i + 'A');
    st.insert({freq[i], ch});
  }
  // Making impossible cases
  if((*st.rbegin()).first > ((n + 1)/2))
  {
    cout << -1 << "\n";
    return;
  }
 
  string ans;
  while(!(tot&1) || (st.size() > 0 && (*st.rbegin()).first < ((tot + 1)/2)))
  {
    for(int i = 0; i < 26; ++i)
    {
      char ch = (char)(i + 'A');
      if(!freq[i] || (ans.size() > 0 && ans.back() == ch)) continue;
      
      int num = freq[i];
      st.erase({num, ch});
      --freq[i];
      
      if(num - 1 > 0) st.insert({num - 1, ch});
      ans += ch;
      --tot;
      break;
    }
    if(!tot) break;
  }
  int cnt = (*st.rbegin()).first;
  while(cnt > 0)
  {
    char ch = (*st.rbegin()).second;
    ans += ch;
    st.erase({freq[ch - 'A'], ch});
    if(freq[ch - 'A'] - 1 > 0) st.insert({freq[ch - 'A'] - 1, ch});
    --freq[ch - 'A'];
 
    for(int i = 0; i < 26; ++i)
    {
      char ch2 = (char)(i + 'A');
 
      if(!freq[i] || (ans.size() > 0 && ans.back() == ch2)) continue;
      int num = freq[i];
      st.erase({num, ch2});
      --freq[i];
      
      if(num - 1 > 0) st.insert({num - 1, ch2});
      ans += ch2;
      break;
    }
    --cnt;
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
