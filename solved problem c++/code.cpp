#include <iostream>
#include <string>
using namespace std;
// write a program to print the fowollowing pattern
/*
*            C
*          i  i
*         s    s
*        b      b
*       e        e
*      s          s
      tsebsiCisbest

*/
// Patern problem
int main()
{
    char pat[] = "Cisbest";
    for (int i = 0; i < 6; i++)
    {
        for (int k = 6; k > i; k--)
            cout << " ";
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
                cout << pat[i];
        }
        for (int k = 0; k < i; k++)
            cout << " ";
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
            {
                if (pat[i] == 'C')
                    cout << " ";
                else
                    cout << pat[i];
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i < 7; i++)
        cout << pat[7 - i];
    for (int i = 0; i < 7; i++)
        cout << pat[i];
    return 0;
}
