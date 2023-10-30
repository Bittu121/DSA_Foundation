#include<bits/stdc++.h>
using namespace std;

//1.Length:- strlen()
// int main(){
//     char ans[100];
//     cin>>ans;
//     int len=strlen(ans);
//     cout<<len<<endl;
// }


//2.compare
// int main(){
//     char ans[100];
//     cin>>ans;
//     char ans1[100];
//     cin>>ans1;
//     if(strcmp(ans,ans1)==0){
//         cout<<"true";
//     }else{
//         cout<<"false";
//     }
// }


//3.copy
// int main(){
//     char ans[100];
//     cin>>ans;
//     char ans1[100];
//     cin>>ans1;
//     cout<<"Before copy:"<<ans<<" "<<ans1<<endl;
//     strcpy(ans,ans1);
//     cout<<"After copy of string:"<<ans<<" "<<ans1; 
// }

//4.strncpy
int main(){
    char ans[100];
    cin>>ans;
    char ans1[100];
    cin>>ans1;
    cout<<"Before copy:"<<ans<<" "<<ans1<<endl;
    strncpy(ans,ans1,3);
    cout<<"After copy of string:"<<ans<<" "<<ans1<<endl;
}