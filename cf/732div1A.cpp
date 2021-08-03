#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;
    vector<int> a(N + 1);
    vector<array<int, 2>> cnt(1e5 + 1);
    for (int i = 1; i <= N; i++)
    {
      cin >> a[i];
      cnt[a[i]][i % 2]++;
    }
    sort(a.begin(), a.end());
    int f = 0;
    for (int i = 1; i <= N; i++)
    {
      cnt[a[i]][i % 2]--;
    }
    for (int i = 1; i <= N; i++)
    {
      f |= cnt[a[i]][0] != 0;
      f |= cnt[a[i]][1] != 0;
    }
    cout << ((f) ? "NO\n" : "YES\n");
  }
}
