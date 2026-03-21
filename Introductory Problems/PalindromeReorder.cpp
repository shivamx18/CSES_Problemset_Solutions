#include <bits/stdc++.h>
using namespace std;

/*************************** CODE HERE ***************************/

void solve()
{
  string s; cin >> s;
  int n = (int)s.size();
  int freq[26] = {0};
  for(int i = 0; i < n; ++i) ++freq[s[i] - 'A']; 

  char temp = '0';
  
  int l(0), r(n - 1);
  for(int i = 0; i < 26; ++i)
  {
    char ch = (char)(i + 'A');
    while(freq[i] > 1)
    {
      s[r] = ch;
      s[l] = ch;
      ++l;
      --r;
      freq[i] -= 2;
    }

    if(freq[i] == 1)
    {
      if(temp == '0') temp = ch;
      else 
      {
        cout << "NO SOLUTION\n";
        return;
      }
    }
  }
  if(temp != '0') s[n/2] = temp;
  cout << s << "\n";
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
