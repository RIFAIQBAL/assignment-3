#include<iostream>
using namespace std;

int main()
{
	int n,digit1,digit2,digit3,num;
        cout<<"enter the range";
	cin>>num; 
	for(int i=1;i<=num;i++)
	{
		digit1=i/100;
		digit2=i/10 - digit1*10;
		digit3=i%10;

		if(digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3 == i)
			cout<<i<<endl;
	}

	
	return 0;
}
