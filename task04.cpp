#include <iostream>
using namespace std;
main()
{
   int num[3];
   for(int x=0; x<3;x++)
   {
   cout<<"Enter 3 numbers:";
   cin>>num[x];
   }  
    for(int x=0;x<3;x++)
    {
        if(7==num[x])
        {
            cout<<"Boom";
            return 0;

        }

        
    }
    cout<<"There is no 7";

}