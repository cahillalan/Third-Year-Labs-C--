#include <iostream>;
#include <cstdlib>;

using namespace std;

int main()
{
	char letter;
	bool con = true;

	cin >> letter; 

		if (letter == 'a' || letter == 'A')
		{
			con = false;
		}
		else if(letter == 'e' || letter == 'E')
		{
			con = false;
		}
		else if (letter == 'i' || letter == 'I')
		{
			con = false;
		}
		else if (letter == 'O' || letter == 'O')
		{
			con = false;
		}
		else if (letter == 'U' || letter == 'U')
		{
			con = false;
		}

	if (con == true)
	{
		cout << "The letter is a constanant";
	}
	else
		cout << "The letter is a vowel";



	system("pause");

	return 0;
}