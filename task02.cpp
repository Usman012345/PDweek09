#include <iostream>
using namespace std;
main()
{
    string name[] = {"gladiator", "starwars", "terminator", "taking lives", "tombrider"};
    double discout = 0.0, price=0.0;
    int x = 0;
    string movie;
    cout << "Enter the name of the movies ";
    cin >> movie;
    for (; x < 5; x++)
    {
        if (movie == name[x])
        {
            break;
        }
    }
    if (x % 2 == 0)
    {
        discout = (10 / 100) * 500;
    }
    else
    {
        discout = (5 / 100) * 500;
    }
    price = 500 - discout;
    cout << price;
}