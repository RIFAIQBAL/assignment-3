#include<iostream>
using namespace std;
int main()
{
char a;
cout<<"enter an alphabet";
cin>>a;
if(a>='a'&&a<='z')
cout<<a<<" is lowercase";
else if(a>= 'A' && a<= 'Z') 
cout<<a<<" is uppercase";
else
cout<<"wrong input";
}

