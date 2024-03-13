#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i < n)
//   {
//     cout << i << " ";
//     i = i + 1;
//   }
//   return 0;
// }

// check given num is prime or not
int main()
{
  int n;
  cin >> n;
  int d = 2;
  bool divide = false;
  while (d < n)
  {
    if (n % d == 0)
    {
      cout << "Not prime" << endl;
      divide = true;
    }
    if (!divide)
    {
      cout << "Prime no" << endl;
      break;
    }
    d = d + 1;
  }
  return 0;
}

// print sum of all even no  i/p 6  o/p:- 2+4+6 = 12