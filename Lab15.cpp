#include <iostream>;
#include <cstdlib>;

using namespace std;

int main()
{
	cout << "Enter Number ";
	int number;
	bool isPrime = true;

	cin >> number;

	for (int i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			isPrime = false;
			break;

		}

	}

	if (isPrime == true)
		cout << "number is Prime ";
	else
		cout << "number is not Prime";

	system("pause");

	return 0;
}