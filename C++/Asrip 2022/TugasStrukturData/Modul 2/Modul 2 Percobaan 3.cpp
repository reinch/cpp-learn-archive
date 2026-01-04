#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int a[100];
	int i;

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			a[i] = a[i] + i;
		}
	}

	for (i = 0; i < 100; i++) 
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	return 0;
}