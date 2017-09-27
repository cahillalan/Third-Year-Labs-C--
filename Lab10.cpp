#include <iostream>;
#include <cstdlib>;

using namespace std;

int main()
{
	cout << "Please enter a Number: ";
	int number;
	int answer;
	cin >> number;

	for (int i = 0; i < 13; i++)
	{
		answer = number * i;

		cout << number << " * " << i << " = " << answer << endl;

	}

	system("pause");

	return 0;
}