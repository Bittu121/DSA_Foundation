#include <bits/stdc++.h>
using namespace std;
int main()
{
  // int a = 10;
  // int b = 15;
  // int c = a + b;
  // cout << c << "integer size " << sizeof(c) << endl;
  // cout << "a" << endl;

  // char d = 'x';
  // cout << d << " char size " << sizeof(d) << endl;

  // float f = 1.23;
  // cout << f << " float size " << sizeof(f) << endl;

  // int newValue = f;
  // cout << newValue << endl;

  // int n1 = 1234567891;
  // long long n2 = 5487956482;
  // long long sumOf = n1 + n2;
  // cout << sumOf << endl;

  // bool b1 = true;
  // cout << b1 << " boolean Size " << sizeof(b1) << endl;

  // double d1 = 4.35;
  // cout << d1 << " double Size " << sizeof(d1) << endl;

  // string str = "coding Ninja";
  // cout << str << " string size " << sizeof(str) << endl;

  // string str1 = " ";
  // cout << str1 << " string size " << sizeof(str1) << endl;

  // calculate simple interest
  float principle, rate, time;
  cin >> principle >> rate >> time;
  double si = (principle * rate * time) / 100;
  cout << "simple interest " << si << endl;
  return 0;
}

