/*
Given an input string S and two characters c1 and c2,
you need to replace every occurrence of character c1 
with character c2 in the given string.
ratul, c1 = t, c2 = h  o/p :- ratul
*/
#include <bits/stdc++.h>
using namespace std;
void replaceCharacter(char ans[], char C1 , char C2)
{
    int len = strlen(ans);
    int i = 0, j = len - 1;
    while (i < j)
    {
        if (ans[i] == C1)
        {
            ans[i] = C2;
        }
        i++;
    }
}
int main()
{
    char ans[100];
    cout << "Enter string:" << endl;
    cin >> ans;
    char C1,C2;
    cout << "Enter characterC1:" << endl;
    cin >>C1;
    cout << "Enter characterC2:" << endl;
    cin >>C2;
    replaceCharacter(ans, C1, C2);
    cout << ans << endl;
}