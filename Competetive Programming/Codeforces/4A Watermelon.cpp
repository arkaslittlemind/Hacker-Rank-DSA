Question Link- https://codeforces.com/problemset/problem/4/A

//Brute Force//

#include <bits/stdc++.h>
using namespace std;

int main() {
  int w;
  cin >> w;
  if (w % 2 == 0 && w > 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
