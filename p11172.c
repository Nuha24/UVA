#include<stdio.h>
int main()
{
    int t,i,a,b;
    scanf("%d", &t);
    int n[t][2];
    for(i=0; i<t; i++)
    {
    scanf("%d %d",&n[i][0],&n[i][1]);
    }
    for(i=0; i<t; i++)
    {
        a=n[i][0];
        b=n[i][1];
        if(a<b)
        {
            printf("<\n");
        }
        else if(a>b)
        {
            printf(">\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}
