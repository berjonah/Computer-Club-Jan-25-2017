#include <iostream>
#include <string>
using namespace std;

int func(int x);

int main(int argc, char* argv[])
{
	string arr[5];

	//read in 5 strings
	for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
	}

	//output 5 strings seperated by spaces
	for (int i = 0; i <= 5; ++i)
	{
		cout << arr[i] << " ";
	}

	//output test for func()
	cout << func(-10);

	return EXIT_SUCCESS;
}

//takes a number and recusivly reduces it to 0
int func(int x)
{
	if (x == 0)
		return 0;
	return func(x - 1);
}
