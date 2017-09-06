#include<iostream>
using namespace std;
int main()
{
char a;
cout<<"enter a character :";
cin>>a;
if((a>='a'&&a<='z')||(a>='A'&&a>='Z'))
cout<<"the character is an alphabet";
else
cout<<a<<" is not an alphabet";
}
