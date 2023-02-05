#include <iostream>
using namespace std;
main()
{
   string elements[4];
   for(int x=0; x<4; x++)
   {
    cout<<"Enter the elements: ";
    cin>>elements[x];
   }
   int y=0;
   for(int x=0; x<4;x++)
   {
   if(elements[0]==elements[x])
   {
    y++;
   }
   }
   if(y==4)
   cout<<"true";
   else
   cout<<"false";
}