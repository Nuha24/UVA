#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,p,r,count;
        cin>>n;
        int a[n]={0};
        cin>>p;
        count=0;
        while(p--)
        {
            scanf("%d",&q);
            for (int i=q;i<n;i+=q)
            {
                r=i%7;
                if (a[i]==0 && r!=0 && r!=6)
                {
                    count++;
                    a[i]=1;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
