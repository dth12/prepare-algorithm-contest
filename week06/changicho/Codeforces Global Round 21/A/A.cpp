#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// time :

int solution(int n, int z, vector<int> &arr) {
  // z : AND
  // arr[i] : OR

  for (int i = 0; i < n; i++) {
    arr[i] |= z;
  }

  int maximum = arr.front();
  for (int &n : arr) {
    maximum = max(maximum, n);
  }

  return maximum;
}

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  // freopen("./input.txt", "r", stdin);

  int T;
  cin >> T;

  for (int testCase = 1; testCase <= T; testCase++) {
    int n, z;
    cin >> n >> z;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int ret = solution(n, z, arr);
    cout << ret;
    cout << "\n";
  }

  return 0;
}