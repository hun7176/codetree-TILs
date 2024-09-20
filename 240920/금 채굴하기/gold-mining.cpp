#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n, m;
bool validpos(int x, int y) {
  if (x < 0 || y < 0)
    return false;
  else if (x >= n | y >= n)
    return false;
  else
    return true;
}

int main() {
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  cin >> n >> m;
  int land[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> land[i][j];

  int kmax = n * 2 - 2;
  int gold, cost, x, y;
  int goldmax = 0;
  for (int k = 0; k <= kmax; k++) {
    cost = k * k + (k + 1) * (k + 1);
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++) {
        gold = 0;

        for (int dy = -k; dy <= +k; dy++) {
          int absdy = abs(dy);
          for (int dx = absdy - k; dx <= k - absdy; dx++) {
            if (validpos(i + dx, j + dy) && land[i + dx][j + dy])
              gold++;
          }
        }
        if (gold * m >= cost)
          goldmax = max(gold, goldmax);
      }
  }
  cout << goldmax;

  return 0;
}