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

//Linear search
// int linearSearch(int arr[],int n,int val){
//   for(int i=0;i<n;i++){
//     if(arr[i]==val){
//       return i;
//     }
//   }
//   return -1;
// }
// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     int val;
//     cin>>val;
//     cout<<linearSearch(arr,n,val);
//   }
//   return 0;
// }


//Two pointer Approach
//Arrange Number
// void arrangeNumber(int arr[],int n){
//   int i=0,j=n-1;
//   int count=0;
//   while(i<=j){
//     if(count%2==1){
//       arr[i]=count;
//       count++;
//       i++;
//     }
//     else{
//       arr[j] = count;
//       count++;
//       j--;
//     }
//   }
// }
// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     arrangeNumber(arr,n);
//     return 0;
//   }
// }

// void arrangeNumber(int arr[],int n){
//   int i=0,j=n-1;
//   int count=0;
//   while(i<=j){
//     if(count%2==1){
//       arr[i]=count;
//       count++;
//       i++;
//     }
//     else{
//       arr[j] = count;
//       count++;
//       j--;
//     }
//   }
// }
// int main(){
//     int arr[]={1,3,5,9,4,2};
//     int size = sizeof(arr)/sizeof(int);
//     arrangeNumber(arr,size);
//     return 0;
//   }

//more on array
// void printArray(int arr[],int size){
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
// }
// int main(){
//   // int arr[5] = {1,2,3};
//   // int arr[6] = {1,2,3};
//   // int arr[5] = {5};
//   // int size =sizeof(arr)/sizeof(int); 
//   // printArray(arr,size);

//   // int arr[5] = {5};
//   // printArray(arr,5);

//   // int arr[10] = {0};
//   // printArray(arr,10);

//   int arr[10] = {1};
//   printArray(arr,10);
//   return 0;
// }




// void arrayPrint(int arr[],int size){
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
// }
// void increment(int a,int arr[],int size ){
//   a++;
//   arr[0]++;
// }
// int main(){
//   int a = 10;
//   int arr[5] = {1,2,3,4,5};
//   arrayPrint(arr,5);
//   increment(a,arr,5);
//   cout<<"value of a :"<<a<<endl;
//   cout<<arr[0]<<endl;
//   return 0;
// }















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