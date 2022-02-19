#include<iostream>
using namespace std;
int main()
{
    long long int y=0;
    while(cin>>y)
    {
    long long int m=0,n=0,s=0;
    if(((y%400)==0)||((y%4==0)&&(y%100!=0)))
    {
    m=1;
    cout<<"This is leap year."<<endl;
    }
    else if(y%15==0){
    n=1;
    cout<<"This is huluculu festival year."<<endl;
    }
    else if(y%55==0 && m==1)
    {
    s=1;
    cout<<"This is bulukulu festival year."<<endl;
    }
    else if(m==0 && n==0 && s==0)
    cout<<"This is an ordinary year."<<endl;
    cout<<endl;
    }
    return 0;

}
