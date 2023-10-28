#include<bits/stdc++.h>
using namespace std;
bool isFibonacci(int n){
    int a = 0,b = 1,c;
    while(a<n){
        c = a+b;
        a = b;
        b = c;
    }
    return a==n;
}
int main(){
    int n;
    cin>>n;
    if(isFibonacci(n)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

}