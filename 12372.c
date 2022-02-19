#include <iostream>
using namespace std;
int main()
{
    int n,l,w,h;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> w >> h;
        cout << "Case " << (i+1) << ": ";
        if (l > 20 || w > 20 || h > 20)
        {
        cout << "bad\n";
        }
        else
        {
        cout << "good\n";
        }
    }
    return 0;
}
