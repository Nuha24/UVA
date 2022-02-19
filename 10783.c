#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d", &n);
    for(int T = 0; T < n; T++)
        {
        scanf("%d %d", &a,&b);
        int sum = 0;
        for(int i = a; i <= b; i++)
        {
        if(i%2!=0)
        sum+=i;
        }
        printf("Case %d : %d\n", T+1,sum);
    }
    return 0;
}
