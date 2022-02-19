#include<stdio.h>
int main()
{
    int a,m,d,n,t,x;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&n);
        x=n;
        m=n;
        int sum=0;
        while(sum!=1)
        {
        sum=0;
        while(m>0)
        {
        d=m/10;
        a=m%10;
        sum+=a*a;
        m=d;
        }
        m=sum;
        if(sum<10)
        {
        if(m==1)
        {
        printf("Case #%d: %d is a Happy number.\n",i,x);
        }
        else
        {
        printf("Case #%d: %d is an Unhappy number.\n",i,x);
        }
        break;
        }
        }
    }
}
