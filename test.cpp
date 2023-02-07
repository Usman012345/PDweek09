#include<iostream>
#include<windows.h>
using namespace std;
string update();
main()
{
    bool running=true;
    while(running)
    {
        system("cls");
        cout<<"                                                       Press Escape to exit"<<endl<<endl;

    cout<<"Admin menu: "<<endl;
    string medicine[3];
    int option;
    cout<<"1.Create"<<endl;
    cout<<"2.Retirve"<<endl;
    cout<<"3.Update"<<endl;
    cout<<"4.Delete"<<endl<<endl;
    cout<<"Enter option...";
    cin>>option;
    if(option==1)
    {
        for(int x=0;x<3;x++)
        {
    cout<<"Create medicine profile: ";
    cin>>medicine[x];
        }
    }
    if(option==2)
    {
         for(int x=0;x<3;x++)
        {
            cout<<medicine[x];
        }
        }
    if(option==3)
    {
        for(int x=0;x<3;x++)
        {
            int y=1;
            cout<<"update medicine ";
            cout<<y <<"."<<medicine[x];
            y++;
        }
        int z;
        cin>>z;
        if(z==1)
            {
                cout<<"Enter the new value: ";
                cin>>medicine[0];
            }
            if(z==2)
            {
                cout<<"Enter the new value: ";
                cin>>medicine[1];
            }
            if(z==3)
            {
                cout<<"Enter the new value: ";
                cin>>medicine[2];
            }

}
   if(option==4)
    {
        for(int x=0;x<3;x++)
        {
            int y=1;
            cout<<"update medicine ";
            cout<<"y "<<medicine[x];
            y++;
        }
        int h;
        cin>>h;
        if(h==1)
            {
                medicine[0] = {0};
            }
            if(h==2)
            {
                medicine[1]={0};
            }
            if(h==3)
            {
                medicine[2]={0};
            }
}
}
if(GetAsyncKeyState(VK_ESCAPE))
{
    return 0;
}
}
