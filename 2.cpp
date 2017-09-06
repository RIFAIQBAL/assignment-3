#include<iostream>
using namespace std;
int main(){
float a,b,c;
cout<<"enter first number";
cin>>a;
cout<<"enter second number :";
cin>>b;
cout<< "enter third number :";
cin>>c;
if (a>b){
cout<<"the maximum is:"<<a;
}
if(b>c){
cout<<"the maximum is:"<<b;
}
if(c>a){
cout<<"the maximum is:"<<c;
}
return 0;
}
