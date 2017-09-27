#include <iostream>;
#include <cstdlib>;

using namespace std;

int main()
{
	cout << "Enter Number ";
	int number;
	int remainder;
	int reverse = 0;

	cin >> number;

	while (number != 0)
	{

		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number = number / 10;

	}

	cout << " number in reverese is: " << reverse;

	system("pause");

	return 0;
}