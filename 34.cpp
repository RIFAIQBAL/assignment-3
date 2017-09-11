#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    cout<<"Enter any number: ";
    cin>>num;

        lastDigit  = num % 10;

 
    digits     = (int)log10(num); 

    firstDigit = (int)(num / pow(10, digits)); 

    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    cout<<"the original number is: "<<num;
    cout<<"Number after swapping first and last digit: "<< swappedNum;

    return 0;
}
