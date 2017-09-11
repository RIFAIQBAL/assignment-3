#include<iostream>
#include <cmath>
using namespace std;
int main()
{
int n,i=0,k,j=0,l=0,m=0,t=0,o=0,p=0,q=0,r=0,s=0;
cout<<"enter any number";
cin>>n;
while(n>0){
k=n%10;
n=n/10;
if(k==0){
i++;
cout<<"the frequency of the digit is"<<i;
}
else if(k==1){
j++;
cout<<"the frequency of the digit 1 is"<<i<<endl;
}
else if(k==2){
l++;
cout<<"the frequency of the digit 2 is"<<i<<endl;
}
else if(k==3){
m++;
cout<<"the frequency of the digit 3 is"<<i<<endl;
}
else if(k==4){
t++;
cout<<"the frequency of the digit 4 is"<<i<<endl;
}
else if(k==5){
o++;
cout<<"the frequency of the digit 5 is"<<i<<endl;
}
else if(k==6){
p++;
cout<<"the frequency of the digit 6 is"<<i<<endl;
}
else if(k==7){
q++;
cout<<"the frequency of the digit 7 is"<<i;
}
else if(k==8){
r++;
cout<<"the frequency of the digit 8 is"<<i<<endl;
}
else if(k==9){ 
s++;
cout<<"the frequency of the digit 9  is"<<i<<endl;
}
}
cout<<"the frequency of the digit 0 is"<<i<<endl;
cout<<"the frequency of the digit 1 is"<<j<<endl;
cout<<"the frequency of the digit 2 is"<<l<<endl;
cout<<"the frequency of the digit 3 is"<<m<<endl;
cout<<"the frequency of the digit 4 is"<<t<<endl;
cout<<"the frequency of the digit 5 is"<<o<<endl;
cout<<"the frequency of the digit 6 is"<<p<<endl;
cout<<"the frequency of the digit 7 is"<<q<<endl;
cout<<"the frequency of the digit 8 is"<<r<<endl;
cout<<"the frequency of the digit 9  is"<<s<<endl;
}
