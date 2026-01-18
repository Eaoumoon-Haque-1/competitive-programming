#include<bits/stdc++.h>
using namespace std;

int count_down(int n) {
  if (n == 0) {
    cout << "0: Base Case!" << endl;
    return 1;
  }
  else {
    cout << n << endl;
    cout << count_down(n - 1) << endl; // Recursive call
  }
}

int main() {
  count_down(7);
  return 0;
}