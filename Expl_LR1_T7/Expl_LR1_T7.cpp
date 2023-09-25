#include <iostream>

using namespace std;

int main()
{
    const int n = 15;
    int a[n] = { 4,7,14,28,3,6,12,24,48,5,25,1,5,10,20 };
    //            1 2  3-1 2 3  4  5-1 2 -1 2  3  4

    int len = 1; int ind = 0;
    int maxLen = 0; int firstMax = 0;

    int i;
    for (i = 1; i < n; i++)
    {
        int r; r = a[i] % a[i - 1];
        if (r == 0) { len++; }
        else {
            if (maxLen < len)
            {
                maxLen = len; firstMax = ind; ind = i; len = 1;
            }
            else { ind = i; len = 1; }
        }
    }
    cout << "maxLen = " << maxLen << endl;
    cout << "firstMax = " << firstMax << endl;
    cout << endl << endl;
    return 0;
}