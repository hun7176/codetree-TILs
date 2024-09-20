#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> v[i][j];
  int maxn = 0;
  for (int i = 0; i < n - 2; i++)
    for (int j = 0; j < n - 2; j++) {
      int nown = v[i][j] + v[i][j + 1] + v[i][j + 2] + v[i + 1][j] +
                 v[i + 1][j + 1] + v[i + 1][j + 2] + v[i + 2][j] +
                 v[i + 2][j + 1] + v[i + 2][j + 2];
      maxn = max(maxn, nown);
    }
  cout << maxn;

  return 0;
}