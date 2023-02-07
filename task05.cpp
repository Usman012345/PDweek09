#include <iostream>
#include <string>
using namespace std;
string change_alphabet(string string);
main() 
{
	string alphabet;
    cout<<"Enter the alphabet: ";
    cin>>alphabet;
    string final =change_alphabet(alphabet);
    cout<<final;
}
string change_alphabet(string string)
{
int code;
	
	for (int y = 0; y < string.length(); y++)
	{
		code = int(string[y]);

		if (code == 122)
		{
			string[y] = char(97);
		}
		else if (code == 90)
		{
			string[y] = char(65);
		}
		else if (code >= 65 && code <= 90 || code >= 97 && code <= 122)
		{
			string[y] = char(code + 1);
		}
	
	}

	return string;
}