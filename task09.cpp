#include <iostream>
using namespace std;
main()
{
    string pin;
    int num=0;
    int n;
   string dance[10]={"shimmy","shake","pirouette","slide","box step","headspin","dosado","pop","lock","arabesque"};
    cout<<"Enter the pin: ";
    cin>>pin;
    int y=pin.length();
    for(int x=0;x<y;x++)
    {
            num=(pin[x]+x)-48;

            
            if(num>10)
            {
                num=num-10;
                cout<<dance[num];
            
            }
            else{
            cout<<dance[num] <<" , ";
    }       }
            
    }

