#include<bits/stdc++.h>
using namespace std;
void possibleSubStr(char arr[]){
    int len = strlen(arr);
    for(int i=0;i<len;i++){
        for(int j=1;j<len;j++){
           for(int k = i;k<i+j;k++){
            cout<<arr[k];
           }
           cout<<endl;
        }
    }
    

}
int main(){
    char arr[1000000];
    cin>>arr;
    possibleSubStr(arr);
    cout<<arr;
}