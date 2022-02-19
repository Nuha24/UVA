#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) && n != 0)
    {
        int g = n;
        while((g/10) > 0)
        {
           int f = 0;
            while(n>0)
            {
                f+=n%10;
                n/=10;
            }
            g = f;
            n = g;
        }
       printf("%d\n",g);
    }
    return 0;
}
