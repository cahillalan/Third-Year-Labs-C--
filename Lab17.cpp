#include <iostream>;
#include <cstdlib>;

using namespace std;

int main()
{
	cout << "Enter Number as character ";
	char number;
	int numberasint;

	cin >> number;

	numberasint = number - 48;


	cout << endl <<"number as int is: " << numberasint;

	system("pause");

	return 0;
}
