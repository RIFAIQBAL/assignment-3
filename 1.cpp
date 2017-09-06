#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter the first number :";
cin>>a;
cout<<"enter the second number :";
cin>>b;
if(a>b){
cout<<"the maximum is:"<<a;
}
else if(b>a){
cout<<"the maximum is:"<<b;
}
else if(a==b){
cout<<"both are equal";
}
return 0;
}
