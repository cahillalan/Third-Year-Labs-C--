#include <iostream>;
#include <cstdlib>;

using namespace std;

int main()
{
	cout << "Enter Number ";
	int number;
	int remainder;
	int reverse = 0;
	int comparison;

	cin >> number;
	comparison = number;

	while (number != 0)
	{

		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number = number / 10;

	}
	if (reverse == comparison)
		cout << "number is a palindrome";
	else
		cout << "number is not a palindrome";

	system("pause");

	return 0;
}
