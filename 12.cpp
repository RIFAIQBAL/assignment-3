#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter month number";
cin>>a;
if((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12))
cout<<"the month has 31 days";
else if(a==2)
cout<<"the month has 28/29 days";
else if((a==4)||(a==6)||(a==9)||(a==11))
cout<<"the month has 30 days";
else
cout<<"invalid output";
}
