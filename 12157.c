#include <stdio.h>
int main()
{
    int T,Case=1,N,duration,mile,juice;
    scanf("%d",&T);
   for(Case=1; Case<=T; ++Case)
    {
        scanf("%d",&N);
        int mile=0, juice=0;
        while (N--)
        {
        scanf("%d",&duration);
        mile+=(duration/30)*10+10;
        juice+=(duration/60)*15+15;
        }
        printf("Case %d: ",Case);

        if(mile<juice)
        {
        printf("Mile %d\n",mile);
        }
        else if (juice<mile)
        {
        printf("Juice %d\n",juice);
        }
        else
        {
        printf("Mile Juice %d\n",mile);
        }
    }
    return 0;
}
