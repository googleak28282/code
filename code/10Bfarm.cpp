//by googleak28282
#include<bits/stdc++.h>
using namespace std;
int n;
int per[210000];  // The given permutation
void print() {    // Output the permutaion in per[]
  printf("%d", per[0]);
  for (int i = 1; i < n; i++) printf(" %d", per[i]);
  putchar('\n');
}
int main(void) {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
          scanf("%d", per + i);
  }
  // Biggest Answer
  bool ok = false;
  for (int i = 0; i < n; i++) {
    if (per[i] != n - i - 1) {  // 材 i 莱赣璶琌 n - i - 1 琌程
      for (int j = i + 1; j < n; j++) {
        if (per[j] == n - i - 1) {  // т n - i - 1 硂じ竚
          swap(per[i], per[j]);  // ユ传
          print();
          swap(per[i], per[j]);  // 传ㄓ 单单 Smallest Answer 璶ノ﹍逼т
          ok = true;  // т氮
          break;
        }
      }
      break;
    }
  }
  if (!ok) {  // 狦⊿т氮
    swap(per[n - 1], per[n - 2]);  // ユ传程ㄢ
    print();
    swap(per[n - 1], per[n - 2]);
  }
  // Smallest Answer
  ok = false;
  for (int i = 0; i < n; i++) {
    if (per[i] != i) {
      for (int j = i + 1; j < n; j++) {
        if (per[j] == i) {
          swap(per[i], per[j]);
          print();
          swap(per[i], per[j]);
          ok = true;
          break;
        }
      }
      break;
    }
  }
  if (!ok) {
    swap(per[n - 1], per[n - 2]);
    print();
    swap(per[n - 1], per[n - 2]);
  }
  return 0;
}

