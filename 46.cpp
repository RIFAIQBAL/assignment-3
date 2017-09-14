#include<iostream>
using namespace std;
int main()
{
               
                int x,y,hcf=1;

                cout<<    "ENTER 1st NO  : ";
                cin>>x;

                cout<<"Enter 2nd NO. :";
                cin>>y;

                for(int i=1;i<1000;++i)
                {
                                if((x%i==0)&&(y%i==0))
                                hcf=i;
                }


                cout<<"LCM :"<<(x*y)/hcf;

                return 0;
}

