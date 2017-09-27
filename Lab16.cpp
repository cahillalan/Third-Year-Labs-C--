#include <iostream>;
#include <cstdlib>;

using namespace std;

void binary(int dec)
{
	int rem;

	if (dec <= 1)
	{
		cout << dec;
		return;
	}

	rem = dec % 2;
	binary(dec / 2);
	cout << rem;
}

int main()
{
	cout << "Enter Number, Please ensure the number entered is in the correct format:  " << endl;
	int incoming;
	int decimal =0;
	int remainder = 0;
	int base = 1;
	int save;

	cin >> incoming;
	cout << "enter 1 for binary to decimal and enter 2 for decimal to binary" << endl;
	int choice;
	cin >> choice;
	save = incoming;

	if (choice == 1)
	{
		while (incoming > 0)
		{

			remainder = incoming % 10;
			decimal = decimal + remainder * base;
			base = base * 2;
			incoming = incoming / 10;

		}

		cout << "the decimal of the incoming number is " << decimal << endl;
	}
	else
	{
		if (incoming < 0)
			cout << "The number is not a positive integer";
		else
		{
			
			cout << " the binary value of the number is: ";
			binary(incoming);
		}


	}
	system("pause");

	return 0;
}