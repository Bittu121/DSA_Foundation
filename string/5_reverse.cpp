#include <bits/stdc++.h>
using namespace std;
void reverseOfString(char ans[])
{
    int len = strlen(ans);
    int i = 0, j = len - 1;
    while (i < j)
    {
        char temp = ans[i];
        ans[i] = ans[j];
        ans[j] = temp;
        i++;
        j--;
    }
     //cout << " Reverse String :" << ans; //work fine
}
int main()
{
    char ans[100];
    cin.getline(ans, 100);
    reverseOfString(ans);
    cout << " Reverse String :" << ans;  //work fine
}