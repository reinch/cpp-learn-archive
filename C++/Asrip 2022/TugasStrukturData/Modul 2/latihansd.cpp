#include <iostream>
#include <string>
using namespace std;

int main()
{
		int i, j;
		string nama[3][2] = {{ "ari","budi"},{"ami", "badri"},{"ayu","bambang"}};

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << nama[i][j] << " ";
			}
			cout << endl;
		}
		return 0;
}