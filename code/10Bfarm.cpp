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
    if (per[i] != n - i - 1) {  // �� i �����ӭn�O n - i - 1 �~�O�̤j��
      for (int j = i + 1; j < n; j++) {
        if (per[j] == n - i - 1) {  // ��� n - i - 1 �o�Ӥ�������m
          swap(per[i], per[j]);  // �洫
          print();
          swap(per[i], per[j]);  // ���^�� �]������ Smallest Answer �n�έ�l���ƦC��
          ok = true;  // ��쵪�פF
          break;
        }
      }
      break;
    }
  }
  if (!ok) {  // �p�G�S��쵪��
    swap(per[n - 1], per[n - 2]);  // �洫�̫���
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

