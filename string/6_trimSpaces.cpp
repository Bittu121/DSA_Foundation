#include<bits/stdc++.h>
using namespace std;
void trimSpaces(char ans[]){
    int len = strlen(ans);
    int i=0,j=len-1;
    while(i<j){
        if(ans[i]!=' '){
            ans[j] = ans[i];
            j++;
        }
        i++;
    }
    ans[j] = '\0';
}
int main(){
    char ans[10000000];
    cin.getline(ans,1000000);
    trimSpaces(ans);
    cout<<ans;
}