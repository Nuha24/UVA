#include<stdio.h>
int main()
{
    int n,i=0;
    double u=0,v=0,t=0,a=0,s=0;
    scanf("%d", &n);
    if(n==0)
    break;
    switch(n)
    {
   case 1:
    {
    scanf("%d %d %d",&u,&v,&t);
    a=(v-u)/t;
    s=(u*t)+(a*t*t)/2;
    printf("Case %d: %.3lf %.3lf ", i ,s ,a);
    break;
    }
   case 2:
    {
    scanf("%d %d %d",&u,&v,&a);
    s=(v*v-u*u)/(2*a);
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf ", i ,s ,t);
    break;
    }
   case 3:
    {
    scanf("%d %d %d",&u,&a,&s);
    v=sqrt(u*u+2*a*s);
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf ", i ,v ,t);
    break;
    }
   case 4:
    {
   scanf("%d %d %d",&v,&a,&s);
   u=sqrt(v*v-2*a*s);
   t=(v-u)/a;
   printf("Case %d: %.3lf %.3lf ", i ,u ,t);
   break;
   }
}
}
  return 0;

}

