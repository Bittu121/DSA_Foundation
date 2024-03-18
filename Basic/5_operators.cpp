#include <bits/stdc++.h>
using namespace std;
int main()
{
  // int f;
  // cout << "Enter fah value" << endl;
  // cin >> f;
  // int c = (5.0 / 9) * (f - 32);
  // cout << c << endl;

  int r = 10 % 3;
  cout << r << endl;
  int a;
  int b;
  cout << "Enter value of a and b" << endl;
  cin >> a >> b;
  cout << (a > b) << endl;
  cout << (a < b) << endl;
  cout << (a == b) << endl;
  cout << (a == b && a < b) << endl;
  cout << (a == b || a < b) << endl;
  cout << (a != b) << endl;

  return 0;
}