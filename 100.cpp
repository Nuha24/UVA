#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    while(cin >> i >> j)
    {
        int n = 0;
        int a=min(i,j);
        int b= max(i,j);
        for(k = a; k <=b; k++)
    {
        int count = 1, t = k;
        while(t!=1){
        if(t%2==0)
        {
         t=t/2;
        }
         else if(t%2!=0)
        {
          t=t*3+1;
        }
        count++;
        }
         n = max(n, count);
        }
        cout << i << ' ' << j << ' ' << n << endl;
    }

    return 0;
}
