#include <iostream>
using namespace std;

int main()
{
    int i, j, end, sum;

     cout<<"Enter upper limit: ";
    cin>>end;

    cout<<"All Perfect numbers between 1 to "<< end<<endl;
    
    for(i=1; i<=end; i++)
    {
        sum = 0;

               for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
 
               if(sum == i)
        {
           cout<<i<<endl;
        }
    }

    return 0;
}
