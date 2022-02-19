#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char a[10];
    scanf("%d",&n);
    while(n--)
    {
    scanf("%s",&a);
    if(strlen(a)==5)
    {
    printf("3\n");
    }
    else if((a[0]=='t' && a[1]=='w')||(a[0]=='t'&&a[2]=='o')||(a[1]=='w'&&a[2]=='o')||(a[0]=='t' && a[1]=='o')||(a[1]=='t'&&a[2]=='w'))
        {
        printf("2\n");
        }
        else
        {
        printf("1\n");
        }
    }
    return 0;
}
