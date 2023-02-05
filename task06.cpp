#include <iostream>
using namespace std;
main()
{
    int num[3];
    for (int x = 0; x < 3; x++)
    {
        cout << "Enter 3 numbers ";
        cin >> num[x];
    }
    int x = 0;
    cout << "Enter the number of times the operation is to be performed ";
    cin >> x;

    for (int y = 0; y < x; y++)
    {
        int count =0 ;
        for(int z = 0;z<3;z++)
        {
        {
            if (num[z] % 2 == 0)
            {
                num[z] = num[z] - 2;
            }
            else
                num[z] = num[z] + 2;
        } 
    }
    }

    for (int x = 0; x < 3; x++)
    {
        cout << num[x] << endl;
    }
}