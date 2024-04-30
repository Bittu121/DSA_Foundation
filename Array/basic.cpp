#include <bits/stdc++.h>
using namespace std;
// int main(){
// int b[10];
// b[0] = 1;
// b[1] = 10;
// cout<<b[0]<<endl;
// cout<<b[1]<<endl;
// cout<<b[2]<<endl;
// cout<<b[11]<<endl;
// cout<<"size of"<<sizeof(b);

// //Take input from user
// int input[100];
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//   cin>>input[i];
// }
// for(int i = 0;i<n;i++){
//   cout<<input[i]<<" ";
// }
// return 0;
// }

// find largest element from the array and print

// int main(){
//   int n;
//   cin>>n;
//   int input[100];
//   for(int i=0;i<n;i++){
//     cin>>input[i];
//   }
//   // for(int i=0;i<n;i++){
//   //   cout<<input[i];
//   // }
//   // cout<<endl;
//   //  int max = input[0];
//   // int max = 0;
//   int max = INT_MIN;

//   for(int i=1;i<n;i++){
//     if(input[i]>max){
//       max = input[i];
//     }
//   }
//   cout<<"maximum"<<max<<endl;
//   return 0;
// }

// sum of elements
//  int main(){
//    int n;
//    cin>>n;
//    int arr[100];
//    for(int i=0;i<n;i++){
//      cin>>arr[i];
//    }
//    // for(int i=0;i<n;i++){
//    //   cout<<arr[i];
//    // }
//    // cout<<endl;
//    int sum = 0;
//    for(int i=0;i<n;i++){
//      sum = sum+arr[i];
//    }
//    cout<<"SumOfElement:"<<sum;
//    return 0;
//  }

// Array using function
//  void print(int arr[],int n){
//    for(int i=0;i<n;i++){
//      cout<<arr[i]<<" ";
//    }
//    // cout<<"Size of:"<<(sizeof(arr))/(sizeof(int));
//  }
//  int main(){
//    int n;
//    cin>>n;
//    int arr[100];
//    for(int i=0;i<n;i++){
//      cin>>arr[i];
//    }
//    // cout<<sizeof(arr);
//    print(arr,n);
//    return 0;
//  }

int linearSearch(int ans[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (ans[i] == key)
    {
      return i;
    }
  }
  return -1;
}
int main()
{

  int n;
  cin >> n;
  int ans[100];
  for (int i = 0; i < n; i++)
  {
    cin >> ans[i];
  }
  int key;
  cin >> key;
  int keys = linearSearch(ans, n, key);
  cout << keys;
  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// void printArray(int arr[],int size){
//    for (int i = 0; i < size; i++)
//    {
//     cout<<arr[i]<<" ";
//    }

// }
// int main()
// {

// int number[15];
// cout<<endl<<"Everything is fine"<<endl<<endl;
// cout<<"value at 15 index "<<number[15]<<endl;

// int second[3]={5,7,11};
// cout<<"value at second index is :"<<second[2]<<endl;

// int n = 15;
// int third[15]={2,7};
// for(int i=0;i<n;i++){
//   cout<<third[i]<<" ";
// }
// printArray(third,n);

// int n = 10;
// int fourth[10]={0};
// for(int i=0;i<n;i++){
//   cout<<fourth[i]<<" ";
// }

// int n = 10;
// int fiveth[10]={1};
// for(int i=0;i<n;i++){
//   cout<<fiveth[i]<<" ";
// }

//   return 0;
// }