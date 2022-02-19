//10038-uva
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a[10000], i;
	while(cin>>n)
    {
		for(i = 0; i < n; i++)
		cin>>a[i];
		int s[10000], flag = 0;
		for(i = 1; i < n; i++)
		{
        if(abs(a[i] - a[i-1]) < n)
        s[abs(a[i] - a[i-1])]++;
		}
		for(i = 1; i < n; i++)
        if(s[i] == 0)
        {
        flag = 1;
        }
		if(flag==0)
		cout<<"Jolly"<<endl;
		else
		cout<<"Not jolly"<<endl;
	}
}
