#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter an year";
cin>>a;
if((a%4==0)&&(a%100!=0))
cout<<"the year is leap year";
else if(a%100==0)
cout<<"the year is not a leap year";
else if(a%400==0)
cout<<"the year is leap year";
else
cout<<"the year is not a leap year";
}
