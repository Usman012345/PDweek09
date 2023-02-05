#include <iostream>
using namespace std;
main()
{
    string word1;
    int num=0;
    string word2;
    cout<<"Enter word: ";
    cin>>word1;
    cout<<"Enter word 2: ";
    cin>>word2;
    int x=word1.length();
    int z=word2.length();
    for(int a=0;word1[a]!='\0';a++)
    {

    for(int y=0;word2[y]!='\0';y++)
        {
        {
            if(word1[a]==word2[y])
            {
            num=num+1;   
            word2[y]='.';
            break;
        }
        }
        }    
}
        cout<<num;
}