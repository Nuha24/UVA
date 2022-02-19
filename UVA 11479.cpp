//UVA_11479
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,a,b,c;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>a>>b>>c;
        if(a+b<=c || b+c<=a || c+a<=b)
        {
            cout<<"Case "<<i<<": "<<"Invalid"<<endl;
        }
        else if(a==b && b==c )
        {
            cout<<"Case "<<i<<": "<<"Equilateral"<<endl;
        }
        else if(a==b ||b==c|| c==a )
        {
            cout<<"Case "<<i<<": "<<"Isosceles"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<"Scalene"<<endl;
        }
    }
}
