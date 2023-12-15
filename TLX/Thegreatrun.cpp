#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    int N, K;
    cin >> N >> K;

    vector<int> perlari(N);
    for (int j = 0; j < N; j++) {
      cin >> perlari[j];
    }

    int batas = 0;
    for (int j = 0; j <= N - K; j++) {
      int result = 0;
      for (int k = j; k < j + K; k++) {
        result += perlari[k];
      }
      batas = max(batas, result);
    }
    cout << batas << endl;
  }

  return 0;
}