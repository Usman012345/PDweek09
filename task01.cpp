#include<iostream>
using namespace std;
main()
{
    string fruit[]={"peach","apple","guava","watermelon"};
    int price[]={60,70,40,30};
    string fruit_name;
    int total_price,number;
    cout<<"Enter the fruit name: ";
    cin>>fruit_name;
    cout<<"Enter the number of fruit: ";
    cin>>number;
    int y=0;
    for(int x=0;x<4;x++)
    {
        if(fruit_name==fruit[x])
        {
            y=x;
            break;
        }
    }
    total_price=price[y]*number;
    cout<<total_price;

}