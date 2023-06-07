//cin with strings. using getline
#include <iostream>
#include <string>
using namespace std;

int main () 
{
	string astr;

	cout << "what's your name ? ";
	getline (cin, astr);

	cout << "Hello " << astr << ".\n";

	cout << "What's your favorite team ? ";
	getline (cin, astr);

	cout << "Don't know " << astr << " . Don't even know why I asked. Not a football fan :) \n";

	return 0;
}
