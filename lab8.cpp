// lab8.cpp : Defines the entry point for the console application.
//

#include <iostream>;
#include <cstdlib>;

using namespace std;


int main()
{
	int first ;
	int second ;
	int third ;

	cin >> first;
	cin >> second;
	cin >> third;

	if (first > second && first > third)
		cout << "The first number is the biggest";
	else if (second > first && second > third)
		cout << " The second number is the biggest";
	else
		cout << "The third number is the biggest";

	system("pause");


    return 0;
}

