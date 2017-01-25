#include <iostream>
#include <string>
using namespace std;

int func(int x);

int main(int argc, char* argv[])
{
	string arr[5];
	for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i <= 5; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << func(10);

	return EXIT_SUCCESS;
}

int func(int x)
{
	if (x == 0)
		return 0;
	return func(x);
}
