#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int firstdigit,lastdigit,digit,afterswap,num;
cout<<"enter the number";
cin>>num;
lastdigit=num%10;
digit=log10(num);
firstdigit=num/pow(10,digit);
afterswap=lastdigit;
afterswap=afterswap*round((pow(10,digit)));
afterswap=afterswap+(num%(int)(round(pow(10,digit))));
afterswap=afterswap-lastdigit;
afterswap=afterswap+firstdigit;
cout<<"original number ="<<num<<endl;
cout<<"after swapping = "<<afterswap;
return 0;
}

