#include <iostream>
using namespace std;
string cal();
string word;
main()
{
   cout<<"Enter the word";
   cin>>word;
   string result= cal();
   cout<<result;

}
string cal()
{
    string result;
 int x=word.length();
   if(x%2==0)
   result="true";
   else
   result= "false";
   return result;   
}