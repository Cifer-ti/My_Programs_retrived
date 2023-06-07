//stringsteams
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	string astr;
	float price = 0;
	int quantity = 0;

	cout << "Enter price: ";
	getline (cin, astr);
	stringstream(astr) >> price;

	cout << "What's the quantity ? ";
	getline (cin, astr);
	stringstream(astr) >> quantity;

	cout << "Total price: " << price * quantity << endl;

	return 0;
}
