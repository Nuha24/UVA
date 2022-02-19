#include <stdio.h>
int main()
{
    int tc, n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        n = ((((((n * 567) / 9) + 7492) * 235) / 47) - 498);
        if(n < 0)
        n = -n ;
        n=n / 10 % 10;
        printf("%d\n",n );
    }

    return 0;
}
