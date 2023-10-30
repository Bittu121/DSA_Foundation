#include<bits/stdc++.h>
using namespace std;

// int main(){
//     char ans[100];
//     cout<<"enter string:"<<endl;
//     cin>>ans;
//     int count=0;
//     for(int i=0;i<ans[i]!='\0';i++){
//         count++;
//     }
//     cout<<"Length"<<count<<endl;
// }



int lengthOfString(char name[]){
    int count=0;
    // for(int i=0;name[i]!='\0';i++){
    //    // count=count+1;
    //     count++;

    // }

    int len = strlen(name);
    for(int i=0;i<len;i++){
        count++;
    }
    return count;
}
int main(){
    // int n;
    // cin>>n;

    char name[100];
    cout<<"Enter your name :"<<endl;

    // cin>>name;
    // cout<<"Your Name is: "<<name<<endl;

    //Note:-length work
    cin>>name; 

    //Note:- length does not work
    //cin.getline(name, 100, 'b'); //'b' means end of the string

    cout << "Name of string:" << name;
    
    cout<<"length:"<<lengthOfString(name);

    return 0;
}






// method  not work
//  int main(){
//      int n;
//      cout<<"size of the char array:"<<endl;
//      char*ans=new char[n];
//      for(int i=0;i<=n;i++){
//          cin>>ans[i];
//      }
//      cout<<"length:"<<length(ans,n)<<endl;
//      return 0;
//  }











