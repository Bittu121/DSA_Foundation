#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int ans = 1;
    int i = 1;
    while(i<=n){
        ans = ans*i;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    int ans1 = factorial(n);
    //cout<<"factorial1: "<<ans1;
    int ans2 = factorial(r);
    //cout<<"factorial2: "<<ans2;
    int ans3 = factorial(n-r);
    //cout<<"factorial3: "<<ans3;
    int ans4 = ans1/(ans2*ans3);
    cout<<"factorial4: "<<ans4;
}