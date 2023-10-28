#include<bits/stdc++.h>
using namespace std;
void printFahrenhietToCelcius(int start,int end,int step){
    while(start<=end){
        int c = 5*(start-32)/9;
        cout<<start<<"\t"<<end;
        start=start+step;
    }

}
int main(){
    int start,end,step;
    cin>>start>>end>>step;
    printFahrenhietToCelcius(start,end,step);
    return 0;
}