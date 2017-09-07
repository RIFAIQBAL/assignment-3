#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,d,e,f;
cout<<"for any quadratic equation of the form ax^2+bx+c,enter the value of a,b,c: "<<endl;
cin>>a>>b>>c;
d=b*b-4*a*c;
if(d==0){
e=(-b)/(2*a);
f=e;
cout<<e<<" is the root of the quadratic equation-real and equal";
}
else if(d>0){
e=-(b+sqrt(d))/(2*a);
f=-(b-sqrt(d))/(2*a);
cout<<"the roots are " <<e<<" and "<<f;
}
else{ 
e=(-b)/(2*a);
f=sqrt(-d)/(2*a);
cout<<"Roots are imaginary ie,"<<e<<" and "<<f;
}
}
