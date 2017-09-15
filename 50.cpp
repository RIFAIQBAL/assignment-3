#include<iostream>
using namespace std;

int main()
{
cout << "Enter a number: ";
int num,i,answer;
cin >> num;

cout<<"The prime factors are: ";
for (int i=2; i <= num; i++)
{
 while(num % i == 0)
 {
   num /= i;
   answer+=i;
   cout<<i<<" ";
 }
}
}
