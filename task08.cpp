#include <iostream>
using namespace std;
main()
{
    int c;
    cout<<"Enter the number of colors: ";
    cin>>c;
    string color[c];
    int time=0;
    for(int x=0;x<c;x++)
    {
    cout<<"Enter "<<c  <<" colors: ";
    cin>>color[x];
    }
    time=time+2;
    for(int y=1;y<c;y++)
    {
        if(color[y]==color[y+1])
        {
            time=time+2;
        }
        else
        time=time+3;
    }
    cout<<time;
}