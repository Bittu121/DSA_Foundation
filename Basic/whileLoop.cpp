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
// int main()
// {
//   int n;
//   cin >> n;
//   int d = 2;
//   bool divide = false;
//   while (d < n)
//   {
//     if (n % d == 0)
//     {
//       cout << "Not prime" << endl;
//       divide = true;
//     }
//     if (!divide)
//     {
//       cout << "Prime no" << endl;
//       break;
//     }
//     d = d + 1;
//   }
//   return 0;
// }

// print sum of all even no  i/p 6  o/p:- 2+4+6 = 12
// int main()
// {
//   int n;
//   cin >> n;
//   int i = 1, sum = 0;
//   while (i <= n)
//   {
//     if (i % 2 == 0)
//     {
//       sum = sum + i;
//     }
//     i = i + 1;
//   }
//   cout << "Sum of even number" << sum << endl;
//   return 0;
// }

// int main()
// {
//   int n;
//   cin >> n;
//   int i = 0, sum = 0;
//   while (i <= n)
//   {
//     sum = sum + i;
//     i = i + 2;
//   }
//   cout << sum << endl;
//   return 0;
// }
// // Note-

// // Tc O(n)
// // Sc O(1)

// pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// int main()
// {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= i)
//     {
//       cout << j << " ";
//       j = j + 1;
//     }
//     cout << endl;
//     i = i + 1;
//   }
// }

// int main()
// {
//   int rows;
//   cout << "Enter the number of rows: ";
//   cin >> rows;

//   for (int i = 1; i <= rows; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << j << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// int main()
// {
//   int n;
//   cin >> n;
//   int val = 1;
//   int i = 1;
//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= i)
//     {
//       cout << val << " ";
//       j = j + 1;
//       val = val + 1;
//     }
//     cout << endl;
//     i = i + 1;
//   }
//   return 0;
// }

// int main()
// {
//   int n;
//   cout << "Enter the number of rows: ";
//   cin >> n;

//   int count = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << count << " ";
//       count++;
//     }
//     cout << endl;
//   }
//   return 0;
// }

//        1
//      2 3
//    4 5 6
//  7 8 9 10

int main()
{
  int n;
  cin >> n;

  int val = 1;
  int i = 1;
  while (i <= n)
  {
    int k = 1;
    while (k <= n - i)
    {

      cout << "   ";
      k = k + 1;
    }
    int j = 1;
    while (j <= i)
    {
      cout << setw(2) << val << " "; // Use setw to align numbers
      val = val + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  return 0;
}
