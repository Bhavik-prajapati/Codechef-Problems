#include <bits/stdc++.h>
using namespace std;
void kko()
{
    int x, y;
    cin >> x >> y;
    int A = -500, B = y, c = x * 3 - B - A;
    cout << A << " " << B << " " << c << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        kko();
    }
    return 0;
}